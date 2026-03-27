void __thiscall sub_899B30(_DWORD *this, int (__stdcall ***a2)(signed int))
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  signed int v8; // eax
  int (__stdcall ****v9)(signed int); // edx
  int v10; // ecx
  bool v11; // zf
  int v12; // eax
  char v13[4]; // [esp+4h] [ebp-8h] BYREF
  int (__stdcall ***v14)(signed int); // [esp+8h] [ebp-4h]

  v3 = *(this + 0x22);
  if ( v3 + *(this + 0x23) )
  {
    v4 = *(this + 0x20);
    v13[0] = 0xE;
    v14 = a2;
    sub_8D8830(v4, (int)v13);
  }
  else
  {
    v5 = v3 + 1;
    *(this + 0x22) = v5;
    v6 = sub_8DC5C0(v5, (int)this, (int)a2);
    sub_8DE520(v6, (int)a2);
    sub_8CCB90((int)this, (int)a2);
    v7 = *(this + 0x2F);
    v8 = 0;
    if ( v7 <= 0 )
    {
LABEL_7:
      v8 = 0xFFFFFFFF;
    }
    else
    {
      v9 = (int (__stdcall ****)(signed int))*(this + 0x2E);
      while ( *v9 != a2 )
      {
        ++v8;
        ++v9;
        if ( v8 >= v7 )
          goto LABEL_7;
      }
    }
    v10 = *(this + 0x2F) - 1;
    *(this + 0x2F) = v10;
    *(_DWORD *)(*(this + 0x2E) + 4 * v8) = *(_DWORD *)(*(this + 0x2E) + 4 * v10);
    v11 = *((_WORD *)a2 + 2) == 0;
    a2[2] = 0;
    if ( v11 )
      ((void (__thiscall *)(int (__stdcall ***)(signed int)))(*a2)[0xB])(a2);
    sub_8BC730(a2);
    v12 = *(this + 0x22) - 1;
    *(this + 0x22) = v12;
    if ( !v12 )
    {
      if ( *(this + 0x21) )
      {
        if ( !*((_BYTE *)this + 0x90) )
          sub_899210((int)this);
      }
    }
  }
}
