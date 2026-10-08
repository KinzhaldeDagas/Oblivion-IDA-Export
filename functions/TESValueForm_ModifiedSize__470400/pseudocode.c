signed int __stdcall TESValueForm_ModifiedSize(char a1)
{
  signed int result; // eax

  result = 0; /*0x470400*/
  if ( (a1 & 8) != 0 ) /*0x470407*/
    return 4; /*0x470409*/
  return result; /*0x47040e*/
}
