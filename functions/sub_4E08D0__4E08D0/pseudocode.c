__int16 __usercall sub_4E08D0@<ax>(_DWORD *this@<ecx>, int a2@<edi>)
{
  int v2; // esi
  NiObject *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  char v7; // al

  v2 = *(this + 0xF);
  v3 = 0;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 0xB6) )
    {
      this = **(_DWORD ***)(v2 + 0xB0);
      if ( this )
      {
        if ( *(this + 3) )
          v3 = NiRTTI_Cast(&stru_B3CAC0, (NiObject *)*(this + 3));
      }
    }
  }
  sub_4DA7F0((int)this, a2, v2, (int)v3, flt_A30634);
  if ( v2 && (v2 = *(_DWORD *)(v2 + 0xC)) != 0 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
    if ( v6 )
    {
      while ( (BSStringT *)v6 != &stru_B3CAC0 )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 )
          goto LABEL_12;
      }
      v7 = 1;
    }
    else
    {
LABEL_12:
      v7 = 0;
    }
    v5 = v7 != 0 ? v2 : 0;
  }
  else
  {
    v5 = 0;
  }
  return sub_4DA7F0(v4, a2, v2, v5, flt_A30634);
}
