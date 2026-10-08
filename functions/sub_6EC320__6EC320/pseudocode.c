// Aggregates active time range across every key channel exposed by the NiKeyBasedInterpolator virtual interface. Uses the first key time and last record time per nonempty channel; returns [0,0] when none exist.
void __thiscall NiKeyBasedInterpolator_GetActiveTimeRange(void *this, float *a2, float *a3)
{
  float *v3; // ebx
  float *v4; // edi
  unsigned __int16 (__thiscall *v6)(void *); // edx
  float *v7; // ebx
  int v8; // ebp
  float *v9; // ecx
  unsigned __int8 v10; // [esp+14h] [ebp-8h]
  unsigned int v11; // [esp+18h] [ebp-4h]

  v3 = a3; /*0x6ec32a*/
  v4 = a2; /*0x6ec330*/
  *a2 = flt_A7DEB4; /*0x6ec334*/
  v6 = *(unsigned __int16 (__thiscall **)(void *))(*(_DWORD *)this + 0x98); /*0x6ec340*/
  *a3 = -flt_A7DEB4; /*0x6ec348*/
  v11 = 0; /*0x6ec34a*/
  if ( v6(this) ) /*0x6ec352*/
  {
    do /*0x6ec40b*/
    {
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0xAC))(this, (unsigned __int16)v11); /*0x6ec370*/
      v7 = (float *)(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0xA8))(this, (unsigned __int16)v11); /*0x6ec37f*/
      v8 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x9C))(this, (unsigned __int16)v11) - 1; /*0x6ec39b*/
      v10 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0xAC))(this, (unsigned __int16)v11); /*0x6ec3a0*/
      v9 = (float *)(v8 * v10 /*0x6ec3bb*/
                   + (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0xA8))(this, (unsigned __int16)v11));
      if ( v7 ) /*0x6ec3bf*/
      {
        if ( v9 ) /*0x6ec3c3*/
        {
          if ( *a2 > (double)*v7 ) /*0x6ec3d4*/
            *a2 = *v7; /*0x6ec3d8*/
          if ( *a3 < (double)*v9 ) /*0x6ec3e9*/
            *a3 = *v9; /*0x6ec3ed*/
        }
      }
      ++v11; /*0x6ec400*/
    }
    while ( v11 < (*(unsigned __int16 (__thiscall **)(void *))(*(_DWORD *)this + 0x98))(this) ); /*0x6ec40b*/
    v3 = a3; /*0x6ec411*/
    v4 = a2; /*0x6ec415*/
  }
  if ( flt_A7DEB4 == *v4 && -flt_A7DEB4 == *v3 ) /*0x6ec43c*/
  {
    *v4 = 0.0; /*0x6ec440*/
    *v3 = 0.0; /*0x6ec443*/
  }
}
