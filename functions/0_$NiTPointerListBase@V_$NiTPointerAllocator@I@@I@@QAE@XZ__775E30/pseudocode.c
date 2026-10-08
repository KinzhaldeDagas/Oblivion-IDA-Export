void __thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int> *this)
{
  unsigned int v1; // eax
  _DWORD *v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // [esp-4h] [ebp-10h]
  unsigned int i; // [esp+8h] [ebp-4h]

  v1 = 0; /*0x775e32*/
  for ( i = 0; v1 < *((unsigned __int16 *)this + 0x22D); i = ++v1 ) /*0x775e36*/
  {
    v3 = *(_DWORD **)(*((_DWORD *)this + 0x115) + 4 * v1); /*0x775e56*/
    if ( v3 ) /*0x775e5b*/
    {
      v4 = (_DWORD *)v3[5]; /*0x775e5d*/
      v5 = v3 + 4; /*0x775e60*/
      v3[4] = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>::`vftable'; /*0x775e67*/
      while ( v4 ) /*0x775e6d*/
      {
        v6 = v4; /*0x775e72*/
        v4 = (_DWORD *)*v4; /*0x775e74*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v5 + 8))(v3 + 4, v6); /*0x775e7c*/
      }
      v3[7] = 0; /*0x775e85*/
      v3[5] = 0; /*0x775e88*/
      v3[6] = 0; /*0x775e8b*/
      *v5 = &NiTListBase<NiTPointerAllocator<unsigned int>,unsigned int>::`vftable'; /*0x775e8e*/
      FormHeapFree((unsigned int)v3); /*0x775e94*/
      v1 = i; /*0x775e99*/
    }
  }
  v7 = *((_DWORD *)this + 0x118); /*0x775eb4*/
  if ( v7 ) /*0x775ebc*/
  {
    sub_775DA0(*((NiTPointerList__BSImageSpaceShader **)this + 0x118)); /*0x775ec0*/
    FormHeapFree(v7); /*0x775ec6*/
  }
  v8 = *((_DWORD *)this + 0x119); /*0x775ece*/
  if ( v8 ) /*0x775ed6*/
  {
    sub_775DA0(*((NiTPointerList__BSImageSpaceShader **)this + 0x119)); /*0x775eda*/
    FormHeapFree(v8); /*0x775ee0*/
  }
  v9 = *((_DWORD *)this + 0x115); /*0x775eee*/
  *((_DWORD *)this + 0x114) = &NiTArray<NiDX9AdapterDesc::ModeDesc *>::`vftable'; /*0x775eef*/
  FormHeapFree(v9); /*0x775ef9*/
}
