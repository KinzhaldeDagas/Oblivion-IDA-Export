bool __thiscall sub_685790(char *this, TESObjectREFR *a2)
{
  TravelPathNode *v3; // esi
  NiPoint3 *Position; // eax
  int x_low; // ecx
  int y_low; // edx
  float z; // eax
  char v9; // bl
  int v10; // eax
  double v11; // st7
  int v13[2]; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+20h] [ebp-4h]
  int v15; // [esp+28h] [ebp+4h]

  v3 = *(TravelPathNode **)EmbeddedList_GetHead(this); /*0x68579f*/
  if ( !v3 ) /*0x6857a3*/
    return 1; /*0x685864*/
  if ( a2 ) /*0x6857b0*/
  {
    Position = TravelPathNode_GetPosition(v3); /*0x6857b8*/
    x_low = LODWORD(Position->x); /*0x6857bf*/
    *(float *)&v15 = 0.0; /*0x6857c1*/
    y_low = LODWORD(Position->y); /*0x6857c5*/
    z = Position->z; /*0x6857c8*/
    v13[0] = x_low; /*0x6857cb*/
    v13[1] = y_low; /*0x6857d1*/
    v14 = z; /*0x6857d5*/
    v9 = 0; /*0x6857d9*/
    if ( !*((_DWORD *)EmbeddedList_GetHead(this) + 1) ) /*0x6857e0*/
    {
      *(float *)&v15 = sub_6899D0((float *)this); /*0x6857ed*/
      v9 = 1; /*0x6857f1*/
      return sub_684B30(a2, (float *)v13, *(float *)&v15, v9 == 0) != 0; /*0x685853*/
    }
    v10 = DName::status((char *)v3); /*0x6857f7*/
    if ( v10 ) /*0x6857ff*/
    {
      if ( v10 != 1 ) /*0x685804*/
        goto LABEL_10; /*0x685804*/
      v11 = 0.0; /*0x685806*/
      v9 = 1; /*0x685808*/
    }
    else
    {
      v11 = flt_A3D8F0; /*0x68580c*/
    }
    *(float *)&v15 = v11; /*0x685812*/
LABEL_10:
    if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 0xC))(this) ) /*0x68581d*/
      v14 = a2->member.pos[2]; /*0x685826*/
    return sub_684B30(a2, (float *)v13, *(float *)&v15, v9 == 0) != 0; /*0x685826*/
  }
  return 1; /*0x68584b*/
}
