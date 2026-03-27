BOOL __usercall _isindst_nolock@<eax>(int a1@<ebx>, _DWORD *a2@<edi>)
{
  signed int v2; // eax
  int v3; // edx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int v9; // [esp-4h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-4h] BYREF

  v10 = 0;
  v2 = sub_99EDAF(&v10);
  if ( v2 )
    _invoke_watson(v2, v3, v9, a1, (int)a2, 0);
  if ( !v10 )
    return 0;
  v5 = a2[5];
  if ( v5 != dword_B31FD0 || v5 != dword_B31FDC )
  {
    if ( dword_BAA86C )
    {
      if ( TimeZoneInformation.DaylightDate.wYear )
        cvtdate(
          TimeZoneInformation.DaylightDate.wMonth,
          TimeZoneInformation.DaylightDate.wHour,
          1,
          0,
          v5,
          0,
          0,
          TimeZoneInformation.DaylightDate.wDay,
          TimeZoneInformation.DaylightDate.wMinute,
          TimeZoneInformation.DaylightDate.wSecond,
          TimeZoneInformation.DaylightDate.wMilliseconds);
      else
        cvtdate(
          TimeZoneInformation.DaylightDate.wMonth,
          TimeZoneInformation.DaylightDate.wHour,
          1,
          1,
          v5,
          TimeZoneInformation.DaylightDate.wDay,
          TimeZoneInformation.DaylightDate.wDayOfWeek,
          0,
          TimeZoneInformation.DaylightDate.wMinute,
          TimeZoneInformation.DaylightDate.wSecond,
          TimeZoneInformation.DaylightDate.wMilliseconds);
      if ( TimeZoneInformation.StandardDate.wYear )
        cvtdate(
          TimeZoneInformation.StandardDate.wMonth,
          TimeZoneInformation.StandardDate.wHour,
          0,
          0,
          a2[5],
          0,
          0,
          TimeZoneInformation.StandardDate.wDay,
          TimeZoneInformation.StandardDate.wMinute,
          TimeZoneInformation.StandardDate.wSecond,
          TimeZoneInformation.StandardDate.wMilliseconds);
      else
        cvtdate(
          TimeZoneInformation.StandardDate.wMonth,
          TimeZoneInformation.StandardDate.wHour,
          0,
          1,
          a2[5],
          TimeZoneInformation.StandardDate.wDay,
          TimeZoneInformation.StandardDate.wDayOfWeek,
          0,
          TimeZoneInformation.StandardDate.wMinute,
          TimeZoneInformation.StandardDate.wSecond,
          TimeZoneInformation.StandardDate.wMilliseconds);
    }
    else
    {
      cvtdate(4, 2, 1, 1, v5, 1, 0, 0, 0, 0, 0);
      cvtdate(0xA, 2, 0, 1, a2[5], 5, 0, 0, 0, 0, 0);
    }
  }
  v6 = a2[7];
  if ( dword_B31FD4 >= dword_B31FE0 )
  {
    if ( v6 < dword_B31FE0 || v6 > dword_B31FD4 )
      return 1;
    if ( v6 <= dword_B31FE0 || v6 >= dword_B31FD4 )
      goto LABEL_26;
    return 0;
  }
  if ( v6 < dword_B31FD4 || v6 > dword_B31FE0 )
    return 0;
  if ( v6 > dword_B31FD4 && v6 < dword_B31FE0 )
    return 1;
LABEL_26:
  v7 = 0x3E8 * (*a2 + 0x3C * (a2[1] + 0x3C * a2[2]));
  if ( v6 == dword_B31FD4 )
    return v7 >= dword_B31FD8;
  else
    return v7 < dword_B31FE4;
}
