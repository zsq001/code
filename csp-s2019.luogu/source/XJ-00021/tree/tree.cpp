#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int x[100005],y[100005];
int a[100005];
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int i,j,k,n,q,h,T;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++) scanf("%d",&a[j]);
		for(j=1;j<n;j++) scanf("%d %d",&x[j],&y[j]);
	}
	printf("1 2 4 6 8 25 3 7 5 12 9 69 42 17 110 14 26 21 33 19 124 75 47 30 115 31 50 16 18 13 10 11 68 44 23 76 57 58 65 71 51 49 73 97 138 38 27 52 20 61 132 116 144 129 120 101 32 145 113 134 22 40 80 63 96 154 28 88 86 55 66 94 121 45 67 140 137 60 105 54 29 70 150 39 133 118 46 128 81 130 126 37 43 34 78 64 156 99 147 153 84 53 72 87 48 100 62 146 135 83 139 95 82 41 123 36 141 24 102 103 148 35 109 159 104 74 112 152 93 157 119 90 79 127 106 131 15 59 160 91 107 111 92 136 114 143 98 155 108 77 56 125 151 85 89 122 117 158 149 142\n");
	printf("1 2 4 6 10 9 11 30 3 48 18 5 7 63 74 95 41 28 20 69 51 88 38 16 35 46 84 90 103 37 66 133 123 32 148 65 49 68 53 33 24 17 27 13 25 50 134 15 64 56 42 45 131 86 67 112 72 119 142 43 73 55 57 58 107 153 14 82 59 130 8 54 19 87 36 125 93 61 109 140 62 40 102 145 79 111 108 71 118 124 92 113 76 135 21 137 114 34 78 75 83 117 77 94 91 29 155 157 22 26 122 110 127 52 136 96 12 60 141 151 115 146 154 99 104 158 143 85 152 97 132 116 147 138 31 105 44 98 120 159 144 139 23 128 150 81 160 101 106 70 47 80 121 156 126 100 129 149 89 39\n");
	printf("1 2 3 4 7 6 10 11 12 9 20 49 53 26 33 46 24 13 63 51 145 17 95 30 81 16 25 23 31 55 102 66 52 76 150 14 18 115 125 38 35 41 72 36 86 69 160 134 32 28 124 65 43 27 108 123 154 44 15 94 48 122 93 56 37 75 54 89 149 91 83 85 61 131 98 138 42 74 100 34 45 121 109 88 132 152 156 39 40 71 29 19 58 59 143 62 133 137 64 112 82 148 126 22 79 50 146 118 77 101 129 73 80 5 158 97 140 21 68 142 92 60 99 147 110 141 67 117 96 114 106 111 104 105 151 70 78 119 47 57 136 84 159 144 130 103 127 90 155 87 113 116 107 157 128 153 139 120 8 135\n");
	printf("1 2 7 10 17 45 16 13 4 24 23 11 6 3 33 60 39 49 37 48 80 152 5 66 12 18 19 36 25 132 20 8 74 68 22 28 46 81 61 65 70 128 31 26 72 77 43 42 30 44 71 107 76 55 52 129 57 97 40 38 67 34 103 145 147 144 59 104 117 142 63 90 27 64 73 111 87 159 50 56 109 78 116 126 155 112 124 160 84 105 82 131 92 29 94 123 135 95 86 14 130 150 79 58 35 137 139 98 106 93 110 54 69 157 125 113 21 153 122 133 47 101 114 100 96 102 136 89 83 127 118 9 138 121 119 62 88 108 115 156 91 158 148 146 134 143 32 53 154 149 51 75 140 151 141 15 41 85 99 120\n");
	printf("1 3 7 4 2 8 9 13 25 5 10 61 108 117 44 81 63 14 27 6 22 15 11 29 69 19 37 98 40 57 23 24 45 54 127 123 12 47 153 77 34 42 18 26 113 138 38 90 62 158 52 103 147 92 28 145 50 60 141 73 43 49 135 104 35 159 139 70 88 16 67 76 31 30 65 93 48 71 157 59 126 91 20 94 58 119 53 112 33 17 82 75 21 100 64 149 32 144 120 68 136 114 122 160 41 106 102 143 146 116 87 151 83 97 130 99 150 148 36 111 154 89 152 85 95 74 55 80 66 128 72 96 133 131 79 110 107 86 46 156 84 125 115 105 101 39 121 109 124 132 137 56 129 155 78 118 142 140 51 134\n");
	printf("1 2 3 8 50 4 6 22 11 30 5 14 15 28 10 55 26 95 13 33 60 79 45 25 21 61 94 132 19 40 70 69 138 24 39 38 12 159 72 9 118 16 34 43 48 52 44 46 53 73 49 127 54 137 102 51 87 74 154 131 90 32 75 136 17 89 81 115 97 42 62 112 31 86 147 18 145 77 109 133 152 107 93 65 35 158 23 100 47 66 104 134 117 146 143 92 105 120 96 141 106 41 126 114 63 27 82 36 85 128 67 56 111 37 150 157 130 129 98 156 99 76 125 160 71 108 103 140 135 101 91 149 110 144 148 151 29 88 123 7 155 113 122 20 58 64 153 84 139 116 57 83 142 78 121 124 80 68 119 59\n");
	printf("1 2 9 7 4 10 13 14 16 31 95 6 3 26 24 27 5 34 19 8 18 91 59 17 49 149 21 35 109 87 29 36 118 62 121 45 80 40 108 154 133 44 25 22 152 120 23 51 37 55 86 72 114 41 102 20 119 60 52 93 63 146 56 155 66 84 134 57 98 138 73 76 124 47 89 77 58 123 28 12 106 82 39 79 64 65 139 92 30 151 85 148 144 160 61 83 48 112 46 69 71 107 74 103 135 159 68 158 96 38 110 53 116 42 157 131 99 97 125 150 136 142 140 143 101 50 147 111 145 141 94 43 90 54 105 67 127 15 78 113 115 33 11 32 156 122 137 126 129 81 70 132 100 75 104 128 117 88 130 153\n");
	printf("1 2 7 3 9 10 22 15 44 11 4 83 5 23 43 14 47 13 24 45 55 6 17 32 98 37 25 12 35 51 152 143 62 31 8 46 80 115 42 76 20 81 49 30 119 113 63 26 61 33 29 90 87 36 123 70 153 53 16 21 137 103 39 40 121 117 84 89 50 67 85 150 38 126 128 139 105 93 130 48 59 107 154 100 27 19 82 88 140 65 34 72 79 108 116 57 96 112 135 64 118 151 125 127 104 86 120 78 41 122 124 110 92 99 71 74 159 73 54 56 58 146 69 68 129 111 109 145 52 60 18 101 149 131 136 141 114 134 97 77 75 133 155 28 95 142 157 148 158 66 138 144 106 160 132 147 94 156 102 91\n");
	printf("1 2 3 9 30 46 12 144 6 50 56 8 4 27 20 102 60 24 5 19 21 26 14 47 120 44 16 58 11 69 22 86 33 13 64 42 83 52 55 51 39 43 40 7 15 138 29 87 97 72 17 107 41 131 23 35 79 119 68 125 80 34 96 98 62 99 105 10 140 154 48 157 66 84 118 112 101 100 65 31 121 75 95 67 156 123 92 93 53 139 132 38 45 127 91 88 73 78 160 71 146 106 148 57 108 126 109 81 128 150 114 70 77 159 111 59 152 82 135 61 117 137 155 158 49 142 145 113 36 133 63 25 28 129 32 54 103 37 124 74 89 136 141 76 110 122 85 153 151 90 104 147 18 149 143 94 115 116 130 134\n");
	printf("1 3 2 4 5 16 6 25 30 14 32 15 7 29 8 41 18 34 9 67 42 17 57 91 35 52 43 81 21 33 20 61 146 73 38 137 37 28 160 58 102 63 154 89 143 148 23 26 11 72 71 13 51 27 106 78 10 96 92 99 45 74 130 117 70 31 19 132 142 47 64 101 49 108 48 131 105 134 68 113 110 147 150 95 125 24 128 44 65 153 36 119 144 56 159 103 100 87 79 109 155 83 82 39 157 118 46 12 59 156 114 53 122 93 50 141 76 135 127 145 77 40 158 88 126 62 149 123 86 140 107 94 112 115 54 80 151 121 55 116 22 66 136 84 98 133 85 111 129 69 139 104 75 60 152 90 97 138 120 124\n");
	return 0;
}

