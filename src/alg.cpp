// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if ((arr[i] + arr[j]) == value && (i < j))
                count++;
        }
    }
    return count;
}
int countPairs2(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = len - 1; j > i; --j) {
            while (arr[j] > value)
                j--;
            if (arr[i] + arr[j] == value && (i < j))
                count++;
        }
    }
    return count;
}
int countPairs3(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; ++i) {
        int start = i, end = len - 1;
        while (start < end) {
            int mid = (start + end) / 2;
            if ((arr[i] + arr[mid] == value) {
                if (i != mid)
                    count++;
                int temp = mid;
                while ((arr[i] + arr[--mid]) == value && (i < mid))
                    count++;
                while ((arr[i] + arr[++temp]) == value)
                    count++;
                break;
            } else if ((arr[i] + arr[mid]) > value) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
    }
    return count;
}
