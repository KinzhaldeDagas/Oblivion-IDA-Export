void __cdecl sub_A16DC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DB0); /*0xa16dca*/
  if ( off_B02DB4 ) /*0xa16dd6*/
  {
    if ( *off_B02DB4 == 0x53 ) /*0xa16ddb*/
      FormHeapFree((unsigned int)off_B02DB4); /*0xa16dde*/
  }
}
