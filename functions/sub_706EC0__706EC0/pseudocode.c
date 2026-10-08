unsigned int __thiscall sub_706EC0(char *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  char *v5; // edi
  unsigned int result; // eax
  int v7; // esi
  unsigned int (__cdecl *v8)(int, int *, int, signed int *, int); // eax
  int v9; // [esp-14h] [ebp-20h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x706ec2*/
  sub_700A80((int)this, (int)this, (_DWORD *)a2); /*0x706eca*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x706ed5*/
  v5 = this + 0x18; /*0x706ee1*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x706ee5*/
  a2 = 2; /*0x706ee6*/
  v4(v9, v5, 2, &a2, 1); /*0x706eee*/
  result = *(_DWORD *)(v2 + 0xD8); /*0x706ef0*/
  if ( result >= 0x4010005 && result < 0x14010002 ) /*0x706f05*/
  {
    v7 = *(_DWORD *)(v2 + 0x220); /*0x706f0a*/
    v10 = ((unsigned __int8)*v5 >> 2) & 0xF; /*0x706f24*/
    v8 = *(unsigned int (__cdecl **)(int, int *, int, signed int *, int))(v7 + 8); /*0x706f28*/
    a2 = 4; /*0x706f2c*/
    return v8(v7, &v10, 4, &a2, 1); /*0x706f34*/
  }
  return result; /*0x706f39*/
}
