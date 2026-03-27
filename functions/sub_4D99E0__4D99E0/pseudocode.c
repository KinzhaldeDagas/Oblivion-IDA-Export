float *__thiscall sub_4D99E0(int *this, float *a2)
{
  float *result; // eax
  int v4; // edi
  float v5[7]; // [esp+Ch] [ebp-20h] BYREF

  result = a2;
  v5[0] = *a2;
  v5[1] = a2[1];
  v5[2] = a2[2];
  if ( this )
  {
    v4 = *(this + 2);
    if ( v4 )
    {
      sub_89F570(this);
      sub_8A6410(v4);
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v4 + 0x50) + 0x58))(*(_DWORD *)(v4 + 0x50), v5);
      return (float *)sub_89F570(this);
    }
  }
  return result;
}
