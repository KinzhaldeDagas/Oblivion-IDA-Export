void __thiscall sub_612C70(unsigned int *this)
{
  unsigned int *v2; // esi
  unsigned int v3; // eax

  v2 = (unsigned int *)*(this + 0x46);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *v2;
      if ( !v2[1] )
        break;
      if ( v3 )
        goto LABEL_6;
LABEL_7:
      v2 = (unsigned int *)v2[1];
      if ( !v2 )
      {
LABEL_8:
        BSSimpleList_Clear((_DWORD *)*(this + 0x46));
        FormHeapFree(*(this + 0x46));
        *(this + 0x46) = 0;
        return;
      }
    }
    if ( !v3 )
      goto LABEL_8;
LABEL_6:
    FormHeapFree(*v2);
    goto LABEL_7;
  }
}
