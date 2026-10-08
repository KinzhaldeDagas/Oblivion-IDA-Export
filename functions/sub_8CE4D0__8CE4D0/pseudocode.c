int __thiscall sub_8CE4D0(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  _BYTE v10[524]; // [esp+10h] [ebp-210h] BYREF

  if ( this ) /*0x8ce4f8*/
    v3 = *(this + 2); /*0x8ce4fa*/
  else
    v3 = 0; /*0x8ce4ff*/
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x20))(v3); /*0x8ce506*/
  v5 = result; /*0x8ce508*/
  while ( v5 != 0xFFFFFFFF )
  {
    if ( this /*0x8ce52f*/
      && (v6 = *(this + 2)) != 0
      && (v7 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v6 + 0x28))(v6, v5, v10)) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 8); /*0x8ce531*/
    }
    else
    {
      v8 = 0; /*0x8ce536*/
    }
    v9 = this ? *(this + 2) : 0;
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x24))(v9, v5); /*0x8ce549*/
    v5 = result; /*0x8ce54d*/
    if ( !v8 ) /*0x8ce54f*/
      break; /*0x8ce54f*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x90))(v8, a2); /*0x8ce560*/
  }
  return result; /*0x8ce564*/
}
