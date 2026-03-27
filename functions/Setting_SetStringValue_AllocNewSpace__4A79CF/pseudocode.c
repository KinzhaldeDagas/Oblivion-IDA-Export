int __usercall Setting_SetStringValue_::AllocNewSpace@<eax>(unsigned int a1@<eax>, int a2@<ebp>, int a3)
{
  if ( FormHeapAlloc(a1) )
    return Setting_SetStringValue_::CopyValue();
  else
    return Setting_SetStringValue_::Done_(a2, a3);
}
