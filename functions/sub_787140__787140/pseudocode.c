double __thiscall sub_787140(void *this)
{
  int v1; // eax

  if ( *(_DWORD *)this && (v1 = *(_DWORD *)(*(_DWORD *)this + 0x5C)) != 0 )
    return *(float *)(v1 + 0x1C);
  else
    return 0.0;
}
