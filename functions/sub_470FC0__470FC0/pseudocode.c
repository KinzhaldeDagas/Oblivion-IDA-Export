int __thiscall sub_470FC0(_DWORD *this, int a2, float a3)
{
  int v3; // edi
  int v5; // eax
  int v6; // eax

  v3 = a2;
  if ( a2 == 5 )
  {
    sub_470FC0(this, 4, a3);
    sub_470FC0(this, 0, a3);
    goto LABEL_5;
  }
  if ( a2 == 6 )
  {
LABEL_5:
    sub_470FC0(this, 1, a3);
    sub_470FC0(this, 2, a3);
    v3 = 3;
  }
  if ( *(this + 0x26) )
  {
    if ( v3 < 5 )
    {
      v5 = *(this + v3 + 0x28);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 0x44) )
        {
          v6 = *(_DWORD *)(v5 + 0x58);
          if ( v6 )
            sub_470B50(v6, a3);
          if ( *(_DWORD *)(*(this + v3 + 0x28) + 0x44) == 5 )
            sub_6C4480((_DWORD *)*(this + 0x26), a3);
          sub_6C9CB0(*(this + v3 + 0x28), a3, 0);
        }
      }
    }
  }
  *(this + v3 + 0x28) = 0;
  *((_WORD *)this + v3 + 0x1E) = 0xFF;
  *((_WORD *)this + v3 + 0x38) = 0xFF;
  *(this + v3 + 0x12) = 0xFFFFFFFF;
  return 0xFF;
}
