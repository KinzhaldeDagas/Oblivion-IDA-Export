0x51DAC0: push    esi
0x51DAC1: push    edi
0x51DAC2: mov     esi, ecx
0x51DAC4: call    TESForm_InitializeFormRecord
0x51DAC9: lea     ecx, [esi+0A0h]
0x51DACF: call    TESFullName_Save
0x51DAD4: push    54444F4Dh
0x51DAD9: push    42444F4Dh
0x51DADE: push    4C444F4Dh
0x51DAE3: lea     ecx, [esi+0ACh]
0x51DAE9: call    TESModel_Save
0x51DAEE: lea     ecx, [esi+54h]
0x51DAF1: call    TESSpellList_SaveComponent
0x51DAF6: push    5446494Eh
0x51DAFB: push    5A46494Eh
0x51DB00: lea     ecx, [esi+0ECh]
0x51DB06: call    sub_46DBE0
0x51DB0B: lea     edi, [esi+24h]
0x51DB0E: mov     ecx, edi
0x51DB10: call    TESActorBaseData_SaveComponent
0x51DB15: push    6; Size
0x51DB17: lea     eax, [esi+104h]
0x51DB1D: push    eax; Src
0x51DB1E: mov     ecx, esi; this
0x51DB20: call    TESForm_SaveGenericComponents
0x51DB25: push    1; Size
0x51DB27: lea     ecx, [esi+10Ah]
0x51DB2D: push    ecx; Src
0x51DB2E: push    4D414E52h; int
0x51DB33: call    TESForm_PutFormRecordChunkData
0x51DB38: mov     edx, [esi]
0x51DB3A: mov     eax, [edx+120h]
0x51DB40: add     esp, 0Ch
0x51DB43: mov     ecx, esi
0x51DB45: call    eax
0x51DB47: test    eax, eax
0x51DB49: jz      short loc_51DB68
0x51DB4B: mov     edx, [esi]
0x51DB4D: mov     eax, [edx+120h]
0x51DB53: mov     ecx, esi
0x51DB55: call    eax
0x51DB57: mov     ecx, [eax+0Ch]
0x51DB5A: push    ecx
0x51DB5B: push    4D414E5Ah
0x51DB60: call    TESForm_PutCurrentChunkData4
0x51DB65: add     esp, 8
0x51DB68: fld     dword ptr [esi+10Ch]
0x51DB6E: push    ecx
0x51DB6F: fstp    [esp+0Ch+var_C]
0x51DB72: push    4D414E54h
0x51DB77: call    TESForm_PutCurrentChunkData4
0x51DB7C: fld     dword ptr [esi+114h]
0x51DB82: add     esp, 4
0x51DB85: fstp    [esp+0Ch+var_C]
0x51DB88: push    4D414E42h
0x51DB8D: call    TESForm_PutCurrentChunkData4
0x51DB92: fld     dword ptr [esi+110h]
0x51DB98: add     esp, 4
0x51DB9B: fstp    [esp+0Ch+var_C]
0x51DB9E: push    4D414E57h
0x51DBA3: call    TESForm_PutCurrentChunkData4
0x51DBA8: mov     edx, [edi]
0x51DBAA: mov     eax, [edx+28h]
0x51DBAD: add     esp, 8
0x51DBB0: mov     ecx, edi
0x51DBB2: call    eax
0x51DBB4: test    al, al
0x51DBB6: jnz     short loc_51DC33
0x51DBB8: movzx   eax, word ptr [esi+124h]
0x51DBBF: cmp     ax, 0FFFFh
0x51DBC3: jnz     short loc_51DBDD
0x51DBC5: mov     eax, [esi+120h]
0x51DBCB: lea     edx, [eax+1]
0x51DBCE: mov     edi, edi
0x51DBD0: mov     cl, [eax]
0x51DBD2: add     eax, 1
0x51DBD5: test    cl, cl
0x51DBD7: jnz     short loc_51DBD0
0x51DBD9: sub     eax, edx
0x51DBDB: jmp     short loc_51DBE0
0x51DBDD: movzx   eax, ax
0x51DBE0: test    eax, eax
0x51DBE2: jz      short loc_51DC33
0x51DBE4: movzx   eax, word ptr [esi+124h]
0x51DBEB: cmp     ax, 0FFFFh
0x51DBEF: jnz     short loc_51DC0D
0x51DBF1: mov     eax, [esi+120h]
0x51DBF7: lea     edx, [eax+1]
0x51DBFA: lea     ebx, [ebx+0]
0x51DC00: mov     cl, [eax]
0x51DC02: add     eax, 1
0x51DC05: test    cl, cl
0x51DC07: jnz     short loc_51DC00
0x51DC09: sub     eax, edx
0x51DC0B: jmp     short loc_51DC10
0x51DC0D: movzx   eax, ax
0x51DC10: mov     edx, [esi+11Ch]
0x51DC16: lea     ecx, [esi+11Ch]
0x51DC1C: add     eax, 1
0x51DC1F: push    eax; Size
0x51DC20: mov     eax, [edx+14h]
0x51DC23: call    eax
0x51DC25: push    eax; Src
0x51DC26: push    304D414Eh; int
0x51DC2B: call    TESForm_PutFormRecordChunkData
0x51DC30: add     esp, 0Ch
0x51DC33: mov     edx, [edi]
0x51DC35: mov     eax, [edx+30h]
0x51DC38: mov     ecx, edi
0x51DC3A: call    eax
0x51DC3C: test    al, al
0x51DC3E: jnz     short loc_51DCB1
0x51DC40: movzx   eax, word ptr [esi+13Ch]
0x51DC47: cmp     ax, 0FFFFh
0x51DC4B: jnz     short loc_51DC63
0x51DC4D: mov     eax, [esi+138h]
0x51DC53: lea     edx, [eax+1]
0x51DC56: mov     cl, [eax]
0x51DC58: add     eax, 1
0x51DC5B: test    cl, cl
0x51DC5D: jnz     short loc_51DC56
0x51DC5F: sub     eax, edx
0x51DC61: jmp     short loc_51DC66
0x51DC63: movzx   eax, ax
0x51DC66: test    eax, eax
0x51DC68: jz      short loc_51DCB1
0x51DC6A: movzx   eax, word ptr [esi+13Ch]
0x51DC71: cmp     ax, 0FFFFh
0x51DC75: jnz     short loc_51DC8D
0x51DC77: mov     eax, [esi+138h]
0x51DC7D: lea     edx, [eax+1]
0x51DC80: mov     cl, [eax]
0x51DC82: add     eax, 1
0x51DC85: test    cl, cl
0x51DC87: jnz     short loc_51DC80
0x51DC89: sub     eax, edx
0x51DC8B: jmp     short loc_51DC90
0x51DC8D: movzx   eax, ax
0x51DC90: mov     ecx, [esi+138h]
0x51DC96: test    ecx, ecx
0x51DC98: jnz     short loc_51DC9F
0x51DC9A: mov     ecx, offset EmptyString
0x51DC9F: add     eax, 1
0x51DCA2: push    eax; Size
0x51DCA3: push    ecx; Src
0x51DCA4: push    314D414Eh; int
0x51DCA9: call    TESForm_PutFormRecordChunkData
0x51DCAE: add     esp, 0Ch
0x51DCB1: mov     ecx, [esi+28h]
0x51DCB4: shr     ecx, 8
0x51DCB7: test    cl, 1
0x51DCBA: jz      short loc_51DCD4
0x51DCBC: mov     ecx, [esi+100h]
0x51DCC2: test    ecx, ecx
0x51DCC4: jz      short loc_51DCEF
0x51DCC6: call    CreatureSoundArray_Save
0x51DCCB: pop     edi
0x51DCCC: mov     ecx, esi
0x51DCCE: pop     esi
0x51DCCF: jmp     TESForm_FinalizeFormRecord
0x51DCD4: mov     eax, [esi+100h]
0x51DCDA: test    eax, eax
0x51DCDC: jz      short loc_51DCEF
0x51DCDE: mov     edx, [eax+0Ch]
0x51DCE1: push    edx
0x51DCE2: push    52435343h
0x51DCE7: call    TESForm_PutCurrentChunkData4
0x51DCEC: add     esp, 8
0x51DCEF: pop     edi
0x51DCF0: mov     ecx, esi
0x51DCF2: pop     esi
0x51DCF3: jmp     TESForm_FinalizeFormRecord
