unsigned int __stdcall DarknessEffect_PreLoad(int a1)
{
  unsigned int result; // eax

  nullsub_returnvVoid_1arg(a1);
  result = *(_DWORD *)(a1 + 0x3C);
  if ( result )
    return sub_7B8440(result, 1.0);
  return result;
}
