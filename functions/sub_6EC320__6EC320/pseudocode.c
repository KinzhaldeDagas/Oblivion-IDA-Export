void __thiscall sub_6EC320(void *this, float *a2, float *a3)
{
  float *v3; // ebx
  float *v4; // edi
  unsigned __int16 (__thiscall *v6)(void *); // edx
  float *v7; // ebx
  int v8; // ebp
  float *v9; // ecx
  unsigned __int8 v10; // [esp+14h] [ebp-8h]
  unsigned int v11; // [esp+18h] [ebp-4h]

  v3 = a3;
  v4 = a2;
  *a2 = flt_A7DEB4;
  v6 = *(unsigned __int16 (__thiscall **)(void *))(*(_DWORD *)this + 0x98);
  *a3 = -flt_A7DEB4;
  v11 = 0;
  if ( v6(this) )
  {
    do
    {
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0xAC))(this, (unsigned __int16)v11);
      v7 = (float *)(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0xA8))(this, (unsigned __int16)v11);
      v8 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x9C))(this, (unsigned __int16)v11) - 1;
      v10 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0xAC))(this, (unsigned __int16)v11);
      v9 = (float *)(v8 * v10
                   + (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0xA8))(this, (unsigned __int16)v11));
      if ( v7 )
      {
        if ( v9 )
        {
          if ( *a2 > (double)*v7 )
            *a2 = *v7;
          if ( *a3 < (double)*v9 )
            *a3 = *v9;
        }
      }
      ++v11;
    }
    while ( v11 < (*(unsigned __int16 (__thiscall **)(void *))(*(_DWORD *)this + 0x98))(this) );
    v3 = a3;
    v4 = a2;
  }
  if ( flt_A7DEB4 == *v4 && -flt_A7DEB4 == *v3 )
  {
    *v4 = 0.0;
    *v3 = 0.0;
  }
}
