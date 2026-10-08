void __cdecl sub_747830(int a1, int a2)
{
  int Arguments[4]; // [esp+10h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  Arguments[0] = 0x1000; /*0x747863*/
  Arguments[1] = a2; /*0x74786d*/
  Arguments[2] = a1; /*0x747873*/
  Arguments[3] = 0; /*0x747878*/
  ms_exc.registration.TryLevel = 0; /*0x74787b*/
  RaiseException(0x406D1388, 0, 4, (const ULONG_PTR *)Arguments); /*0x74788a*/
}
