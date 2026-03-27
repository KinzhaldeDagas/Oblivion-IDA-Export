void Menu_ClearB3A708()
{
  unsigned int v0; // [esp-4h] [ebp-4h]

  if ( dword_B3A708 )
  {
    v0 = dword_B3A708;
    dword_B3A708 = 0;
    FormHeapFree(v0);
    dword_B3A708 = 0;
  }
}
