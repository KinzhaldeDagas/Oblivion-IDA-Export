unsigned __int8 __thiscall sub_45E940(TESSaveLoadGame_SerializationView *this, char *source)
{
  unsigned __int8 result; // al
  unsigned __int8 Src; // [esp+Bh] [ebp-1h] BYREF

  Src = 0; /*0x45e94b*/
  if ( source ) /*0x45e950*/
    Src = strlen(source); /*0x45e962*/
  SaveLoad_SaveData(this, &Src, 1u); /*0x45e96f*/
  result = Src; /*0x45e974*/
  if ( Src ) /*0x45e97a*/
    return (unsigned __int8)SaveLoad_SaveData(this, source, Src); /*0x45e983*/
  return result; /*0x45e988*/
}
