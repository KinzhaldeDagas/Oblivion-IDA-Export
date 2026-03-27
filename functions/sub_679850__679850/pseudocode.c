void *__thiscall sub_679850(int *this)
{
  TESSaveLoad *v1; // ecx
  void *result; // eax
  void (__stdcall *v3)(volatile LONG *); // ebp
  NiObject *v4; // eax
  volatile LONG *v5; // eax
  volatile LONG *v6; // esi
  char v7; // al
  volatile LONG v8; // edx
  int v9; // eax
  NiObject *v10; // eax
  NiObject *v11; // eax
  float *v12; // eax
  float *v13; // eax
  size_t v14; // [esp-4h] [ebp-34h] BYREF
  unsigned __int8 v15; // [esp+13h] [ebp-1Dh] BYREF
  unsigned __int16 Dst; // [esp+14h] [ebp-1Ch] BYREF
  int *v17; // [esp+18h] [ebp-18h]
  unsigned int v18; // [esp+1Ch] [ebp-14h]
  size_t *v19; // [esp+20h] [ebp-10h]
  int v20; // [esp+2Ch] [ebp-4h]

  v17 = this;
  v1 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x26u )
  {
    SaveLoad_AdvanceBufferOffset(v1, 6);
    v1 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v14) = 2;
  result = SaveLoad_LoadData((int)v1, &Dst, v14);
  v18 = 0;
  if ( Dst )
  {
    v3 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    do
    {
      LODWORD(v14) = 1;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v15, v14);
      switch ( v15 )
      {
        case 0u:
          v4 = (NiObject *)FormHeapAlloc(0x1Cu);
          v19 = (size_t *)v4;
          v20 = 0;
          if ( !v4 )
            goto LABEL_8;
          v5 = (volatile LONG *)sub_56BDE0(v4);
          goto LABEL_9;
        case 1u:
          v10 = (NiObject *)FormHeapAlloc(0x54u);
          v19 = (size_t *)v10;
          v20 = 1;
          if ( !v10 )
            goto LABEL_8;
          v5 = (volatile LONG *)sub_56CDE0(v10);
          goto LABEL_9;
        case 2u:
          v11 = (NiObject *)FormHeapAlloc(0x20u);
          v19 = (size_t *)v11;
          v20 = 2;
          if ( !v11 )
            goto LABEL_8;
          v5 = (volatile LONG *)sub_570700(v11);
          goto LABEL_9;
        case 5u:
          v12 = (float *)FormHeapAlloc(0x38u);
          v19 = (size_t *)v12;
          v20 = 3;
          if ( !v12 )
            goto LABEL_8;
          v5 = (volatile LONG *)MagicModelHitEffect_constr(v12);
          goto LABEL_9;
        case 6u:
          v13 = (float *)FormHeapAlloc(0x4Cu);
          v19 = (size_t *)v13;
          v20 = 4;
          if ( v13 )
            v5 = (volatile LONG *)MagicShaderHitEffect_constr(v13);
          else
LABEL_8:
            v5 = 0;
LABEL_9:
          v6 = v5;
          v20 = 0xFFFFFFFF;
          if ( v5 )
          {
            v7 = (*(int (__thiscall **)(volatile LONG *))(*v5 + 0x64))(v5);
            v8 = *v6;
            if ( v7 )
            {
              v9 = (*(int (__thiscall **)(volatile LONG *))(v8 + 0x54))(v6);
              v19 = &v14;
              LODWORD(v14) = v6;
              if ( (unsigned int)(v9 - 4) > 2 )
              {
                v3(v6 + 1);
                sub_677CF0(v17 + 0x10, v14);
              }
              else
              {
                v3(v6 + 1);
                sub_677CF0(v17 + 0x12, v14);
              }
            }
            else
            {
              (*(void (__thiscall **)(volatile LONG *, int))v8)(v6, 1);
            }
          }
          break;
        default:
          PrintError("Unknown temp effect type: %i", v15);
          break;
      }
      result = (void *)++v18;
    }
    while ( v18 < Dst );
  }
  return result;
}
