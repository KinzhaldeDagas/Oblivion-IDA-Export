void __thiscall TESContainer_LinkComponent(_BYTE *this, TESForm *a2)
{
  _BYTE *v3; // esi
  int *v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // eax

  if ( (*(this + 4) & 1) == 0 ) /*0x469e97*/
  {
    v3 = this + 8; /*0x469e9f*/
    v4 = 0; /*0x469ea2*/
    if ( this != (_BYTE *)0xFFFFFFF8 ) /*0x469ea6*/
    {
      do /*0x469eb0*/
      {
        v5 = *(_DWORD **)v3; /*0x469eb0*/
        if ( *(_DWORD *)v3 ) /*0x469eb0*/
        {
          TESContainer_ItemEntry_Link(v5, a2); /*0x469ebd*/
          if ( !v5[1] ) /*0x469ec2*/
          {
            if ( v4 ) /*0x469eca*/
            {
              BSSimpleList_Remove(v4, (int)v5); /*0x469ecf*/
              v3 = (_BYTE *)v4[1]; /*0x469ed4*/
              FormHeapFree((unsigned int)v5); /*0x469ed8*/
            }
            else
            {
              v6 = *((_DWORD **)v3 + 1); /*0x469ee2*/
              if ( v6 ) /*0x469ee7*/
              {
                *((_DWORD *)v3 + 1) = v6[1]; /*0x469eec*/
                *(_DWORD *)v3 = *v6; /*0x469ef2*/
                FormHeapFree((unsigned int)v6); /*0x469ef4*/
              }
              else
              {
                *(_DWORD *)v3 = 0; /*0x469f08*/
              }
              FormHeapFree((unsigned int)v5); /*0x469efd*/
            }
            continue; /*0x469ee0*/
          }
          v4 = (int *)v3; /*0x469f18*/
        }
        v3 = *((_BYTE **)v3 + 1); /*0x469f1a*/
      }
      while ( v3 ); /*0x469eb0*/
    }
    *(this + 4) |= 1u; /*0x469f22*/
  }
}
