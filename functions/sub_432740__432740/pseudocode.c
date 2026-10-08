int __thiscall sub_432740(unsigned int *this)
{
  unsigned int v2; // ebp
  void *v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int result; // eax
  unsigned int v7; // [esp+Ch] [ebp-Ch]
  unsigned int v8; // [esp+10h] [ebp-8h]
  void *v9; // [esp+14h] [ebp-4h]

  v2 = 2 * **(_DWORD **)(*this + 0x14); /*0x43274f*/
  v3 = (void *)FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 8 * **(_DWORD **)(*this + 0x14));
  v9 = v3; /*0x43277a*/
  memcpy(v3, *(const void **)(*this + 0x10), 4 * v2); /*0x43277e*/
  v7 = 0; /*0x43278b*/
  v8 = 0; /*0x43278f*/
  while ( *(this + 4) ) /*0x432788*/
  {
    v4 = *(this + 4); /*0x432796*/
    *(this + 4) = *(_DWORD *)(v4 + 4); /*0x43279c*/
    v5 = 0; /*0x43279f*/
    if ( v2 ) /*0x4327a3*/
    {
      while ( v4 != *((_DWORD *)v3 + v5) ) /*0x4327a8*/
      {
        if ( ++v5 >= v2 ) /*0x4327af*/
          goto LABEL_5; /*0x4327af*/
      }
      ++v8; /*0x43280d*/
      *(_DWORD *)(v4 + 4) = v7; /*0x432812*/
      v7 = v4; /*0x432815*/
    }
    else
    {
LABEL_5:
      *(_DWORD *)(v4 + 4) = 0; /*0x4327b1*/
      FormHeapFree(v4); /*0x4327d7*/
      v3 = v9; /*0x4327dc*/
    }
  }
  FormHeapFree((unsigned int)v3); /*0x4327ec*/
  *(this + 4) = v7; /*0x4327fc*/
  *(this + 3) = v8; /*0x4327ff*/
  return result; /*0x432802*/
}
