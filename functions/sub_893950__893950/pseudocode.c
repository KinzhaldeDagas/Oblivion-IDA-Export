int __thiscall sub_893950(int ***this)
{
  int result; // eax
  int v3; // ecx
  int (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // [esp+8h] [ebp-4h] BYREF

  result = sub_891160(this); /*0x893954*/
  if ( result ) /*0x89395b*/
  {
    v3 = *(_DWORD *)(result + 0x1C); /*0x89395d*/
    if ( v3 ) /*0x893962*/
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v3 + 0x88))(v3, &v5, result); /*0x893972*/
      result = v5; /*0x893974*/
      if ( v5 ) /*0x89397a*/
      {
        v4 = (int (__thiscall ***)(_DWORD, int))v5; /*0x89397d*/
        result = InterlockedDecrement((volatile LONG *)(v5 + 4)); /*0x893983*/
        if ( !result ) /*0x89398b*/
          result = (**v4)(v4, 1); /*0x893999*/
      }
    }
  }
  *(this + 0x7D) = (int **)((unsigned int)*(this + 0x7D) & 0xFFFF7FFF); /*0x89399c*/
  return result; /*0x8939a6*/
}
