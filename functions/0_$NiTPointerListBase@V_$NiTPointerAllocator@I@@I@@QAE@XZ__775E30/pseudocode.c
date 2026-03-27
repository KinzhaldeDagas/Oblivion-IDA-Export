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

  v1 = 0;
  for ( i = 0; v1 < *((unsigned __int16 *)this + 0x22D); i = ++v1 )
  {
    v3 = *(_DWORD **)(*((_DWORD *)this + 0x115) + 4 * v1);
    if ( v3 )
    {
      v4 = (_DWORD *)v3[5];
      v5 = v3 + 4;
      v3[4] = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>::`vftable';
      while ( v4 )
      {
        v6 = v4;
        v4 = (_DWORD *)*v4;
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v5 + 8))(v3 + 4, v6);
      }
      v3[7] = 0;
      v3[5] = 0;
      v3[6] = 0;
      *v5 = &NiTListBase<NiTPointerAllocator<unsigned int>,unsigned int>::`vftable';
      FormHeapFree((unsigned int)v3);
      v1 = i;
    }
  }
  v7 = *((_DWORD *)this + 0x118);
  if ( v7 )
  {
    sub_775DA0(*((NiTPointerList__BSImageSpaceShader **)this + 0x118));
    FormHeapFree(v7);
  }
  v8 = *((_DWORD *)this + 0x119);
  if ( v8 )
  {
    sub_775DA0(*((NiTPointerList__BSImageSpaceShader **)this + 0x119));
    FormHeapFree(v8);
  }
  v9 = *((_DWORD *)this + 0x115);
  *((_DWORD *)this + 0x114) = &NiTArray<NiDX9AdapterDesc::ModeDesc *>::`vftable';
  FormHeapFree(v9);
}
