void swap_max(int arr[], int len, int pos)
{
  int max= -99999;
  int index = 0;
  for(int i = 0; i < len ;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
      index = i;
    }
  }
  int temp=0;
  temp=arr[index];
  arr[index]=arr[pos];
  arr[pos]=temp;
}
void ssort(int arr[], int l)
{
  for(int i=0;i<l-1;i++)
  {
    swap_max(arr,l,i);
  }
}
  
