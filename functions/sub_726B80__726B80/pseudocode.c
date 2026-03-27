void __thiscall sub_726B80(_DWORD *this, int a2)
{
  const void *v3; // ebp
  void *v4; // eax
  void *v5; // edi
  size_t v6; // [esp-4h] [ebp-24h]

  v3 = (const void *)*(this + 5);
  v4 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * a2);
  v5 = v4;
  if ( v4 )
    sub_401080(v4, 0x1C, a2, (void *(__thiscall *)(void *))sub_53D910);
  else
    v5 = 0;
  *(this + 5) = v5;
  if ( v3 )
  {
    LODWORD(v6) = 0x1C * *(this + 4);
    memcpy(v5, v3, v6);
    FormHeapFree((unsigned int)v3);
  }
  *(this + 4) = a2;
}
