void __thiscall sub_6B8F50(UInt32 *this)
{
  UInt32 *v2; // esi
  unsigned int v3; // edi
  UInt32 *v4; // eax

  if ( !*((_BYTE *)this + 0x20) )
  {
    v2 = this + 3;
    if ( this != (UInt32 *)0xFFFFFFF4 )
    {
      while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)(this + 3)) )
      {
        v3 = *v2;
        if ( *v2 )
        {
          sub_6B8050((_DWORD *)*v2);
          FormHeapFree(v3);
        }
        v4 = (UInt32 *)*(this + 4);
        if ( v4 )
        {
          *(this + 4) = v4[1];
          *v2 = *v4;
          FormHeapFree((unsigned int)v4);
        }
        else
        {
          *v2 = 0;
        }
      }
    }
  }
  FormHeapFree(*this);
  *this = 0;
  *((_WORD *)this + 3) = 0;
  *((_WORD *)this + 2) = 0;
}
