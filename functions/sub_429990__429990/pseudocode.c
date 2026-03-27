void __thiscall sub_429990(char *this)
{
  int v1; // [esp+0h] [ebp-8h]
  int Level; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  v3 = *this;
  if ( (*(this + 8) & 4) != 0 )
  {
    Level = (unsigned __int16)Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, v1);
    Double_To_SInt32((double)Level * fLeveledLockMult + (double)v3);
  }
}
