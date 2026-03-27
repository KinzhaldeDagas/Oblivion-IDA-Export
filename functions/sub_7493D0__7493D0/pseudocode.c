int __thiscall sub_7493D0(_DWORD *this, float a2)
{
  float *v3; // eax
  float *v4; // esi
  int result; // eax

  if ( byte_B4081C )
  {
    if ( dword_B3F940 )
    {
      if ( *(_BYTE *)(dword_B3F940 + 0x1B0) )
      {
        if ( *(float *)(*(this + 0x2D) + 0x18) > 0.0 && GetCurrentThreadId() == dword_B40820 )
        {
          v3 = (float *)sub_75E2E0();
          v4 = v3;
          if ( v3 )
          {
            sub_75DFF0(v3, (int)this, a2);
            result = (*(int (__thiscall **)(int, float *, int))(*(_DWORD *)dword_B3F940 + 0x4C))(dword_B3F940, v4, 3);
            if ( (_BYTE)result )
              return result;
            (*(void (__thiscall **)(float *))(*(_DWORD *)v4 + 0x54))(v4);
          }
        }
      }
    }
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x9C))(this, LODWORD(a2));
}
