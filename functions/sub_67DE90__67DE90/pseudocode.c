void __thiscall sub_67DE90(char *this, TESHealthForm *a2)
{
  TESHealthForm *v2; // edi
  void *v4; // ecx
  NiDX92DBufferData *Health; // eax
  char *Head; // eax
  char *LinkedDoor; // eax
  void *Position; // eax
  float *v9; // esi
  NiDX92DBufferData *v10; // eax
  int v11; // [esp+Ch] [ebp-30h] BYREF
  float v12; // [esp+10h] [ebp-2Ch]
  float v13; // [esp+14h] [ebp-28h]
  NiPoint3 v14; // [esp+18h] [ebp-24h] BYREF
  int v15; // [esp+24h] [ebp-18h] BYREF
  float v16; // [esp+28h] [ebp-14h]
  float v17; // [esp+2Ch] [ebp-10h]
  NiPoint3 v18; // [esp+30h] [ebp-Ch] BYREF

  v2 = a2; /*0x67de95*/
  if ( a2 && TeleportData_GetLinkedDoor((TeleportData *)a2) && !MEMORY[0xB333A0]->currentInteriorCell ) /*0x67deb7*/
  {
    v4 = *((void **)this + 9); /*0x67dec1*/
    if ( v4 ) /*0x67dec6*/
    {
      Position = PathGraphNode_GetPosition(v4); /*0x67df17*/
    }
    else
    {
      a2 = 0; /*0x67dec8*/
      Health = (NiDX92DBufferData *)TESHealthForm_GetHealth(v2); /*0x67ded3*/
      if ( sub_68BF60((NiDX92DBufferData **)v2, Health, (NiDX92DBufferData **)&a2) && a2 ) /*0x67deea*/
      {
        Head = EmbeddedList_GetHead((char *)a2); /*0x67deec*/
        v11 = *(int *)Head; /*0x67def3*/
        v12 = *((float *)Head + 1); /*0x67defa*/
        v13 = *((float *)Head + 2); /*0x67df01*/
        goto LABEL_11; /*0x67df05*/
      }
      LinkedDoor = (char *)TeleportData_GetLinkedDoor((TeleportData *)v2); /*0x67df09*/
      Position = EmbeddedList_GetHead(LinkedDoor); /*0x67df10*/
    }
    v11 = *(int *)Position; /*0x67df1e*/
    v12 = *((float *)Position + 1); /*0x67df25*/
    v13 = *((float *)Position + 2); /*0x67df2c*/
LABEL_11:
    v9 = (float *)(this + 0xC); /*0x67df30*/
    if ( sub_43F7C0((int *)MEMORY[0xB333A0], (float *)&v11, v9, (float *)&v15, 1.0) ) /*0x67df4a*/
    {
      v14.x = *v9 - *(float *)&v11; /*0x67df61*/
      v14.y = v9[1] - v12; /*0x67df6c*/
      v14.z = v9[2] - v13; /*0x67df77*/
      Vector3_NormalizeInPlace(&v14.x); /*0x67df7b*/
      v17 = v13; /*0x67df88*/
      v18.x = *(float *)&v15 + v14.x; /*0x67df9c*/
      v18.y = v16 + v14.y; /*0x67dfb0*/
      v18.z = v14.z + v13; /*0x67dfbc*/
      v14.x = *(float *)&v15 - v14.x; /*0x67dfc6*/
      v14.y = v16 - v14.y; /*0x67dfcc*/
      v14.z = v13 - v14.z; /*0x67dfd2*/
      v10 = (NiDX92DBufferData *)TESHealthForm_GetHealth(v2); /*0x67dfd6*/
      sub_68C3A0((TeleportData **)v2, &v14, &v18, v10); /*0x67dfe8*/
    }
  }
}
