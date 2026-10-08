// Verified scene-object pick dispatcher: rejects invalid/filtered candidates, delegates NiGeometryData to NiPick_ProcessGeometryIntersection, and has a separate bounds/RTTI fallback that writes hit point and distance but does not explicitly populate the normal field.
char __cdecl NiPick_ProcessSceneObject(float *a1, float *a2, int a3, float *a4)
{
  int v5; // eax
  int v6; // ebx
  NiPickRecord_Oblivion_044Verified *v7; // eax
  NiPickRecord_Oblivion_044Verified *pickRecord; // esi
  float *v9; // eax
  int v10[3]; // [esp+14h] [ebp-18h] BYREF
  float v11[3]; // [esp+20h] [ebp-Ch] BYREF
  float pickedObject; // [esp+3Ch] [ebp+10h]

  if ( !a4 || *(_BYTE *)(a3 + 0x11) && ((_BYTE)a4[6] & 1) != 0 ) /*0x95d561*/
    return 0; /*0x95d552*/
  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)a4 + 8))(a4); /*0x95d56b*/
  v6 = v5; /*0x95d56d*/
  if ( v5 && (*(_BYTE *)(v5 + 0x18) & 0x40) != 0 ) /*0x95d57c*/
    return 0; /*0x95d585*/
  if ( !sub_96E4C0(a4, a1, a2) ) /*0x95d593*/
    return 0; /*0x95d593*/
  if ( v6 ) /*0x95d5a5*/
    return sub_95D730(a1, a2, (float *)a3, (int)a4); /*0x95d5be*/
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a4 + 0x10))(a4) ) /*0x95d5c6*/
    return NiPick_ProcessGeometryIntersection(a1, a2, a3, (NiGeometryData *)a4); /*0x95d5e3*/
  if ( !unk_BA9A6C ) /*0x95d5e4*/
    return 0; /*0x95d5e4*/
  if ( !NiRTTI::IsObjectOfRTTIType(&stru_B4021C, (NiObject *)a4) ) /*0x95d5f7*/
    return 0; /*0x95d5f7*/
  sub_4121A0(a4 + 0x22, (float *)v10, a1); /*0x95d613*/
  if ( sub_47D9E0(a2, (float *)v10) < *(float *)&SrcStr ) /*0x95d62f*/
    return 0; /*0x95d62f*/
  v7 = (NiPickRecord_Oblivion_044Verified *)FormHeapAlloc(0x44u); /*0x95d633*/
  pickRecord = v7 ? NiPickRecord_Initialize(v7, (NiRefObject *)a4) : 0;
  sub_95A360((_DWORD *)a3, (int)pickRecord); /*0x95d654*/
  pickedObject = NiPoint3_Length((float *)v10); /*0x95d662*/
  pickRecord->hitDistance_014 = pickedObject;   // Verified bounds-only pick path stores hit distance at NiPickRecord +0x14 and intersection XYZ at +0x08..+0x10; it does not explicitly populate the geometry surface-normal field. /*0x95d66a*/
  if ( *(_DWORD *)(a3 + 8) != 1 ) /*0x95d671*/
    return 0; /*0x95d6b0*/
  v9 = sub_4707B0(a2, (float *)v10, pickedObject); /*0x95d67e*/
  pickRecord->intersectionPoint_008 = *(NiPoint3 *)sub_47D9B0(a1, v11, v9); /*0x95d692*/
  return 0; /*0x95d54e*/
}
