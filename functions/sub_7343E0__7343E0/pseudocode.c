void *__thiscall sub_7343E0(void (__stdcall **this)(char *), char *Dst, int a3, char *a4)
{
  char *v6; // ebx
  void *result; // eax
  char *v8; // [esp+10h] [ebp-48h]
  char Src[3]; // [esp+14h] [ebp-44h] BYREF
  char v10[61]; // [esp+17h] [ebp-41h] BYREF

  v6 = Src; /*0x7343fc*/
  if ( *this ) /*0x7343f8*/
    ((void (__thiscall *)(void (__stdcall **)(char *), char *))*this)(this, v10); /*0x734409*/
  ((void (__thiscall *)(void (__stdcall **)(char *), char *))*(this + 1))(this, Src); /*0x734415*/
  result = a4; /*0x73441b*/
  if ( a4 ) /*0x734425*/
  {
    v8 = a4; /*0x734427*/
    do /*0x734446*/
    {
      result = memcpy(Dst, v6, 4 * a3); /*0x734433*/
      Dst = &Dst[(_DWORD)*(this + 3)]; /*0x734438*/
      v6 += 0x10; /*0x73443e*/
      --v8; /*0x734441*/
    }
    while ( v8 ); /*0x734446*/
  }
  return result; /*0x734448*/
}
