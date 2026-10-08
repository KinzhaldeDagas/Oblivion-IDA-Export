int __thiscall sub_90B4B0(_DWORD **this, _DWORD *a2, int a3, int a4)
{
  int v4; // edi
  int v6; // ecx
  int result; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h]
  _DWORD *v13; // [esp+1Ch] [ebp-4h]

  v4 = *a2; /*0x90b4c3*/
  v12 = a2[2]; /*0x90b4ca*/
  v13 = a2; /*0x90b4ce*/
  v6 = *(_DWORD *)(v4 + 0xC); /*0x90b4d5*/
  v11 = a2[1]; /*0x90b4d9*/
  v10 = v6; /*0x90b4dd*/
  (*(void (__thiscall **)(_DWORD, int *, int, int))(**(this + 3) + 0x1C))(*(this + 3), &v10, a3, a4); /*0x90b4ec*/
  result = (int)*(this + 4); /*0x90b4ef*/
  if ( result ) /*0x90b4f4*/
  {
    v8 = *(_DWORD *)(v4 + 0x10); /*0x90b4fd*/
    v11 = v13[1]; /*0x90b501*/
    v9 = (int)*(this + 4); /*0x90b505*/
    v10 = v8; /*0x90b50d*/
    return (*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)v9 + 0x1C))(v9, &v10, a3, a4); /*0x90b514*/
  }
  return result; /*0x90b517*/
}
