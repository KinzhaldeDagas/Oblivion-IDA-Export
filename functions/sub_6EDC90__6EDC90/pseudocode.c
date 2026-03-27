_DWORD *__cdecl sub_6EDC90(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  _DWORD *result; // eax

  v3 = a1;
  if ( a1 != a2 )
  {
    v4 = a3 + 6;
    do
    {
      sub_5520E0(v3, (int)v4, a3);
      result = sub_414420((int)(v3 + 6), v4, 0, 0xFFFFFFFF);
      v3 += 0xD;
    }
    while ( v3 != a2 );
  }
  return result;
}
