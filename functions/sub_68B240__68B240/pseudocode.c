void __thiscall sub_68B240(int *this, int a2)
{
  char v3; // al
  int v4; // ebx
  char v5; // cl
  float *v6; // esi

  if ( a2 )
  {
    v3 = *((_BYTE *)this + 4);
    v4 = *(char *)(a2 + 4);
    if ( v3 != v4 )
    {
      if ( v3 == 1 )
        FormHeapFree(*this);
      *this = 0;
      *((_BYTE *)this + 4) = v4;
    }
    v5 = *(_BYTE *)(a2 + 4);
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        if ( v5 != 1 || (v6 = *(float **)a2) == 0 )
          v6 = &Vector3_InitValue_;
        sub_68B200(this, v6);
      }
    }
    else if ( !*((_BYTE *)this + 4) )
    {
      *this = *(_DWORD *)a2;
    }
  }
}
