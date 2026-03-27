0x69F1E0: push    esi
0x69F1E1: mov     esi, ecx
0x69F1E3: mov     eax, [esi+68h]
0x69F1E6: push    eax
0x69F1E7: call    MagicCaster_GetFromRefID
0x69F1EC: mov     [esi+68h], eax
0x69F1EF: mov     eax, [esi+6Ch]
0x69F1F2: push    eax
0x69F1F3: call    MagicItem_LookupByFormID
0x69F1F8: add     esp, 8
0x69F1FB: push    0
0x69F1FD: push    2
0x69F1FF: lea     ecx, [eax+0Ch]
0x69F202: mov     [esi+6Ch], eax
0x69F205: call    EffectItemList_GetStrongestItem
0x69F20A: mov     ecx, [esi+6Ch]
0x69F20D: push    0
0x69F20F: mov     [esi+70h], eax
0x69F212: call    MagicItem_GetFXEffect
0x69F217: mov     [esi+74h], eax
0x69F21A: mov     eax, [esi]
0x69F21C: mov     edx, [eax+14Ch]
0x69F222: mov     ecx, esi
0x69F224: call    edx
0x69F226: mov     eax, [esp+4+arg_4]
0x69F22A: mov     ecx, [esp+4+arg_0]
0x69F22E: push    eax
0x69F22F: push    ecx
0x69F230: mov     ecx, esi
0x69F232: call    MobileObject_LinkModifierForm
0x69F237: mov     ecx, esi; this
0x69F239: call    Actor__GetProcessLevel
0x69F23E: push    eax
0x69F23F: push    esi
0x69F240: mov     ecx, offset ActorProcessManager_ptr
0x69F245: call    sub_674550
0x69F24A: push    0
0x69F24C: push    0
0x69F24E: push    0
0x69F250: mov     ecx, esi; this
0x69F252: call    Actor__GetProcessLevel
0x69F257: push    eax
0x69F258: push    esi
0x69F259: mov     ecx, offset ActorProcessManager_ptr
0x69F25E: call    sub_673A90
0x69F263: cmp     dword ptr [esi+68h], 0
0x69F267: jz      short loc_69F26F
0x69F269: cmp     dword ptr [esi+6Ch], 0
0x69F26D: jnz     short loc_69F27B
0x69F26F: mov     ecx, ds:0B33B00h
0x69F275: push    esi
0x69F276: call    sub_453910
0x69F27B: pop     esi
0x69F27C: retn    8
