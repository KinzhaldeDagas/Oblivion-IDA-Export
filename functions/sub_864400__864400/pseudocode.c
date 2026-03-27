char __thiscall sub_864400(_DWORD *this, NiAVObject *a2)
{
  char v2; // bl
  NiProperty *NiPropertyByID; // eax

  v2 = sub_7DA220(this, a2);
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a2, 7);
  if ( NiPropertyByID )
    sub_4A1220((int **)a2, (int)NiPropertyByID);
  return v2;
}
