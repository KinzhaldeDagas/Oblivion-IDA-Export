int __usercall Setting_SetStringValue_::CheckValue@<eax>(int ebx0@<ebx>, int a2, int a3, int a4, char *a5)
{
  if ( a5 )
    return Setting_SetStringValue_::GetValueLen(ebx0, a5, a2, a3, a4, a5);
  else
    return Setting_SetStringValue_::Done_SetValueNull(a2);
}
