void __thiscall sub_6D0C30(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ebp
  unsigned int v4; // edi
  int v5; // ebx
  float v6; // [esp+1Ch] [ebp-Ch]
  int v7; // [esp+20h] [ebp-8h]
  int v8; // [esp+24h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 0xA4))(this);
  v3 = *(_DWORD *)(*(this + 0x14) + 8);
  v8 = v2;
  v7 = *(unsigned __int16 *)(*(_DWORD *)(*(this + 0xC) + 0xB4) + 8);
  if ( !*((_BYTE *)this + 0x59) )
    _memset(v2, 0, 0xC * *(unsigned __int16 *)(*(_DWORD *)(*(this + 0xC) + 0xB4) + 8));
  v4 = 0;
  if ( v3 )
  {
    v5 = 0;
    do
    {
      if ( v4 < *((unsigned __int16 *)this + 0x25) )
      {
        v6 = *(float *)(*(this + 0x11) + 4 * v4);
        if ( v6 >= (double)flt_A37080 || flt_A57CB0 >= (double)v6 )
          sub_725BD0(v8, v6, *(_DWORD *)(*(_DWORD *)(*(this + 0x14) + 0x10) + v5), v7);
      }
      ++v4;
      v5 += 0xC;
    }
    while ( v4 < v3 );
  }
}
