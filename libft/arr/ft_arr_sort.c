#include "libft.h"

void	ft_arr_sort(char **arr)
{
	size_t	ind;
	size_t	count;
	size_t	arr_size;
	char	*tmp;

	arr_size = ft_arr_len(arr);
	count = 0;
	while (count < arr_size)
	{
		ind = 0;
		while (arr[ind] && arr[ind + 1])
		{
			if (ft_strncmp(arr[ind], arr[ind + 1], ft_strlen(arr[ind])) > 0)
			{
				tmp = arr[ind];
				arr[ind] = arr[ind + 1];
				arr[ind + 1] = tmp;
			}
			ind++;
		}
		count++;
	}
}
