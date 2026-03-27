0x5EB520: push    0FFFFFFFFh
0x5EB522: push    offset SummonCreatureEffect_Apply_SEH
0x5EB527: mov     eax, large fs:0
0x5EB52D: push    eax
0x5EB52E: sub     esp, 18h
0x5EB531: push    ebx
0x5EB532: push    ebp
0x5EB533: push    esi
0x5EB534: push    edi
0x5EB535: mov     eax, ds:0B30AACh
0x5EB53A: xor     eax, esp
0x5EB53C: push    eax; int
0x5EB53D: lea     eax, [esp+38h+var_C]
0x5EB541: mov     large fs:0, eax
0x5EB547: mov     esi, ecx
0x5EB549: mov     ecx, [esi+58h]
0x5EB54C: test    ecx, ecx
0x5EB54E: jz      short loc_5EB560
0x5EB550: mov     eax, [ecx]
0x5EB552: mov     edx, [eax+8]
0x5EB555: call    edx
0x5EB557: cmp     eax, 3
0x5EB55A: jz      loc_5EBB1A
0x5EB560: mov     ecx, [esi+58h]
0x5EB563: test    ecx, ecx
0x5EB565: jz      short loc_5EB586
0x5EB567: mov     eax, [ecx]
0x5EB569: mov     edx, [eax+8]
0x5EB56C: call    edx
0x5EB56E: test    eax, eax
0x5EB570: jnz     short loc_5EB586
0x5EB572: call    InitBSShaderAccumulator
0x5EB577: test    eax, eax
0x5EB579: jz      short loc_5EB586
0x5EB57B: mov     ecx, [esi+0Ch]
0x5EB57E: push    ecx
0x5EB57F: mov     ecx, eax
0x5EB581: call    sub_7AD1E0
0x5EB586: mov     ecx, [esi+58h]
0x5EB589: test    ecx, ecx
0x5EB58B: mov     bl, 12h
0x5EB58D: jz      short loc_5EB5BA
0x5EB58F: mov     eax, [ecx]
0x5EB591: mov     edx, [eax+184h]
0x5EB597: call    edx
0x5EB599: test    eax, eax
0x5EB59B: jz      short loc_5EB5BA
0x5EB59D: cmp     [eax+20h], bl
0x5EB5A0: jnz     short loc_5EB5BA
0x5EB5A2: mov     ecx, [esi+58h]
0x5EB5A5: mov     eax, [ecx]
0x5EB5A7: mov     edx, [eax+1CCh]
0x5EB5AD: call    edx
0x5EB5AF: test    al, al
0x5EB5B1: jz      short loc_5EB5BA
0x5EB5B3: mov     ecx, esi; int
0x5EB5B5: call    sub_5EAE70
0x5EB5BA: push    esi; a1
0x5EB5BB: mov     ecx, offset ActorProcessManager_ptr; this
0x5EB5C0: call    sub_674850
0x5EB5C5: cmp     dword ptr [esi+0B0h], 6
0x5EB5CC: jnz     short loc_5EB5EA
0x5EB5CE: push    0; newDeadState
0x5EB5D0: mov     ecx, esi; this
0x5EB5D2: call    Actor_HandleDeathSTate????
0x5EB5D7: fldz
0x5EB5D9: mov     ecx, [esi+58h]
0x5EB5DC: mov     eax, [ecx]
0x5EB5DE: mov     edx, [eax+0A0h]
0x5EB5E4: push    ecx
0x5EB5E5: fstp    [esp+3Ch+var_3C]
0x5EB5E8: call    edx
0x5EB5EA: mov     ecx, [esi+58h]
0x5EB5ED: test    ecx, ecx
0x5EB5EF: jz      short loc_5EB616
0x5EB5F1: mov     eax, [ecx+8]
0x5EB5F4: test    eax, eax
0x5EB5F6: jz      short loc_5EB616
0x5EB5F8: cmp     [eax+20h], bl
0x5EB5FB: jnz     short loc_5EB616
0x5EB5FD: mov     eax, [ecx]
0x5EB5FF: mov     edx, [eax+0CCh]
0x5EB605: call    edx
0x5EB607: cmp     eax, ds:0B333C4h
0x5EB60D: jz      short loc_5EB616
0x5EB60F: mov     ecx, esi; int
0x5EB611: call    sub_5EAE70
0x5EB616: mov     eax, [esi+58h]
0x5EB619: mov     eax, [eax+8]
0x5EB61C: test    eax, eax
0x5EB61E: jz      short loc_5EB65D
0x5EB620: cmp     byte ptr [eax+20h], 0Fh
0x5EB624: jnz     short loc_5EB65D
0x5EB626: mov     ecx, esi; this
0x5EB628: call    sub_5E6C60
0x5EB62D: test    al, al
0x5EB62F: jnz     short loc_5EB65D
0x5EB631: mov     ecx, ds:0B333C4h; this
0x5EB637: call    TESObjectREFR_GetParentCell
0x5EB63C: test    eax, eax
0x5EB63E: jz      short loc_5EB656
0x5EB640: mov     ecx, ds:0B333C4h; this
0x5EB646: call    TESObjectREFR_GetParentCell
0x5EB64B: mov     ecx, eax; this
0x5EB64D: call    TESObjectCELL_IsInterior
0x5EB652: test    al, al
0x5EB654: jnz     short loc_5EB65D
0x5EB656: mov     ecx, esi; int
0x5EB658: call    sub_5EAE70
0x5EB65D: mov     ecx, [esi+58h]
0x5EB660: mov     edx, [ecx]
0x5EB662: mov     eax, [edx+8]
0x5EB665: call    eax
0x5EB667: mov     ecx, esi
0x5EB669: mov     edi, eax
0x5EB66B: call    sub_5E4B00
0x5EB670: cmp     edi, 1
0x5EB673: jz      short loc_5EB679
0x5EB675: test    edi, edi
0x5EB677: jnz     short loc_5EB680
0x5EB679: mov     ecx, esi
0x5EB67B: call    sub_5E4FC0
0x5EB680: lea     ecx, [esi+68h]
0x5EB683: call    MagicTarget_RemoveAllEffects
0x5EB688: mov     ecx, ds:0B33A98h
0x5EB68E: cmp     byte ptr [ecx+0CD4h], 0
0x5EB695: jnz     short loc_5EB6B1
0x5EB697: mov     ecx, ds:0B33B00h
0x5EB69D: call    sub_45A500
0x5EB6A2: test    al, al
0x5EB6A4: jnz     short loc_5EB6B1
0x5EB6A6: push    esi
0x5EB6A7: mov     ecx, offset ActorProcessManager_ptr
0x5EB6AC: call    sub_6765A0
0x5EB6B1: mov     edx, [esi]
0x5EB6B3: mov     eax, [edx+1F8h]
0x5EB6B9: mov     ecx, esi
0x5EB6BB: call    eax
0x5EB6BD: test    al, al
0x5EB6BF: mov     ecx, esi
0x5EB6C1: jz      short loc_5EB6DF
0x5EB6C3: call    sub_5E9E70
0x5EB6C8: mov     ecx, [esi+58h]
0x5EB6CB: mov     edx, [ecx]
0x5EB6CD: mov     eax, [edx+23Ch]
0x5EB6D3: push    esi
0x5EB6D4: call    eax
0x5EB6D6: mov     ecx, esi
0x5EB6D8: call    RunScripts
0x5EB6DD: jmp     short loc_5EB70B
0x5EB6DF: mov     edx, [esi]
0x5EB6E1: mov     eax, [edx+198h]
0x5EB6E7: push    0
0x5EB6E9: call    eax
0x5EB6EB: test    al, al
0x5EB6ED: jz      short loc_5EB70B
0x5EB6EF: mov     ecx, [esi+58h]
0x5EB6F2: mov     edx, [ecx]
0x5EB6F4: mov     eax, [edx+8]
0x5EB6F7: call    eax
0x5EB6F9: test    eax, eax
0x5EB6FB: jnz     short loc_5EB70B
0x5EB6FD: mov     edx, [esi]
0x5EB6FF: mov     eax, [edx+9Ch]
0x5EB705: push    1
0x5EB707: mov     ecx, esi
0x5EB709: call    eax
0x5EB70B: push    edi
0x5EB70C: push    esi
0x5EB70D: mov     ecx, offset ActorProcessManager_ptr
0x5EB712: call    sub_674550
0x5EB717: mov     ecx, [esi+58h]
0x5EB71A: xor     edi, edi
0x5EB71C: xor     bl, bl
0x5EB71E: xor     ebp, ebp
0x5EB720: cmp     ecx, edi
0x5EB722: jz      short loc_5EB734
0x5EB724: mov     edx, [ecx]
0x5EB726: mov     eax, [edx+388h]
0x5EB72C: call    eax
0x5EB72E: mov     [esp+38h+var_21], al
0x5EB732: jmp     short loc_5EB739
0x5EB734: mov     [esp+38h+var_21], 0
0x5EB739: mov     ecx, [esi+58h]
0x5EB73C: mov     ecx, [ecx+8]
0x5EB73F: cmp     ecx, edi
0x5EB741: mov     byte ptr [esp+38h+var_20], 0
0x5EB746: jz      short loc_5EB798
0x5EB748: call    sub_567770
0x5EB74D: test    al, al
0x5EB74F: jz      short loc_5EB798
0x5EB751: push    edi
0x5EB752: mov     ecx, esi
0x5EB754: call    sub_5E6CD0
0x5EB759: test    al, al
0x5EB75B: jz      short loc_5EB771
0x5EB75D: mov     edx, [esi]
0x5EB75F: mov     eax, [edx+338h]
0x5EB765: mov     bl, 1
0x5EB767: mov     ecx, esi
0x5EB769: mov     byte ptr [esp+38h+var_20], bl
0x5EB76D: call    eax
0x5EB76F: mov     ebp, eax
0x5EB771: mov     ecx, [esi+58h]
0x5EB774: mov     eax, [ecx+8]
0x5EB777: cmp     eax, edi
0x5EB779: jz      short loc_5EB781
0x5EB77B: cmp     byte ptr [eax+20h], 0Fh
0x5EB77F: jz      short loc_5EB798
0x5EB781: mov     edx, [esi]
0x5EB783: mov     eax, [edx+330h]
0x5EB789: mov     ecx, esi
0x5EB78B: call    eax
0x5EB78D: test    eax, eax
0x5EB78F: jnz     short loc_5EB798
0x5EB791: mov     ecx, esi; int
0x5EB793: call    sub_5EAE70
0x5EB798: push    90h; Size
0x5EB79D: call    FormHeapAlloc
0x5EB7A2: add     esp, 4
0x5EB7A5: mov     [esp+38h+var_1C], eax
0x5EB7A9: cmp     eax, edi
0x5EB7AB: mov     [esp+38h+var_4], edi
0x5EB7AF: jz      short loc_5EB7BA
0x5EB7B1: mov     ecx, eax; this
0x5EB7B3: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x5EB7B8: mov     edi, eax
0x5EB7BA: mov     edx, [edi]
0x5EB7BC: mov     eax, [esi+58h]
0x5EB7BF: mov     edx, [edx+4]
0x5EB7C2: push    eax
0x5EB7C3: mov     ecx, edi
0x5EB7C5: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x5EB7CD: call    edx
0x5EB7CF: mov     ecx, [esi+58h]
0x5EB7D2: test    ecx, ecx
0x5EB7D4: jz      short loc_5EB7DE
0x5EB7D6: mov     eax, [ecx]
0x5EB7D8: mov     edx, [eax]
0x5EB7DA: push    1
0x5EB7DC: call    edx
0x5EB7DE: mov     [esi+58h], edi
0x5EB7E1: mov     eax, [edi]
0x5EB7E3: mov     edx, [eax+0B8h]
0x5EB7E9: push    esi
0x5EB7EA: mov     ecx, edi
0x5EB7EC: call    edx
0x5EB7EE: push    0
0x5EB7F0: push    0
0x5EB7F2: push    1
0x5EB7F4: push    3
0x5EB7F6: push    esi
0x5EB7F7: mov     ecx, offset ActorProcessManager_ptr
0x5EB7FC: call    sub_673A90
0x5EB801: test    bl, bl
0x5EB803: jz      short loc_5EB833
0x5EB805: mov     ecx, [esi+58h]
0x5EB808: mov     edi, [ecx]
0x5EB80A: mov     eax, [edi+148h]
0x5EB810: push    1
0x5EB812: push    0
0x5EB814: push    0
0x5EB816: push    0
0x5EB818: call    eax
0x5EB81A: mov     ecx, [esp+38h+var_10]
0x5EB81E: mov     edx, [edi+228h]
0x5EB824: push    eax
0x5EB825: push    0
0x5EB827: push    ecx
0x5EB828: mov     ecx, [esi+58h]
0x5EB82B: push    0
0x5EB82D: push    ebp
0x5EB82E: push    esi
0x5EB82F: call    edx
0x5EB831: jmp     short loc_5EB847
0x5EB833: cmp     [esp+38h+var_21], 0
0x5EB838: jz      short loc_5EB847
0x5EB83A: mov     ecx, [esi+58h]
0x5EB83D: mov     eax, [ecx]
0x5EB83F: mov     edx, [eax+18h]
0x5EB842: push    0
0x5EB844: push    esi
0x5EB845: call    edx
0x5EB847: mov     eax, ds:0B33A98h
0x5EB84C: test    eax, eax
0x5EB84E: jz      loc_5EBB1A
0x5EB854: cmp     byte ptr [eax+0CD4h], 0
0x5EB85B: jnz     loc_5EBB1A
0x5EB861: cmp     [esp+38h+var_21], 0
0x5EB866: jz      short loc_5EB875
0x5EB868: mov     ecx, [esi+58h]
0x5EB86B: mov     eax, [ecx]
0x5EB86D: mov     edx, [eax+18h]
0x5EB870: push    0
0x5EB872: push    esi
0x5EB873: call    edx
0x5EB875: mov     eax, [esi]
0x5EB877: mov     edx, [eax+334h]
0x5EB87D: push    1
0x5EB87F: mov     ecx, esi
0x5EB881: call    edx
0x5EB883: test    al, al
0x5EB885: jz      loc_5EBA89
0x5EB88B: mov     ecx, [esi+58h]
0x5EB88E: mov     eax, [ecx]
0x5EB890: mov     edx, [eax+3D0h]
0x5EB896: call    edx
0x5EB898: cmp     eax, ds:0B333C4h
0x5EB89E: jnz     short loc_5EB8CE
0x5EB8A0: mov     eax, [esi+58h]
0x5EB8A3: mov     edi, [eax]
0x5EB8A5: mov     ecx, offset TimeGlobals
0x5EB8AA: call    TimeGlobals_GetGameHour
0x5EB8AF: fsub    qword ptr ds:0A2FAA0h
0x5EB8B5: mov     edx, [edi+1Ch]
0x5EB8B8: push    ecx
0x5EB8B9: mov     ecx, [esi+58h]
0x5EB8BC: fstp    [esp+3Ch+var_20]
0x5EB8C0: fld     [esp+3Ch+var_20]
0x5EB8C4: fstp    [esp+3Ch+var_3C]
0x5EB8C7: call    edx
0x5EB8C9: jmp     loc_5EBB13
0x5EB8CE: push    0
0x5EB8D0: mov     ecx, esi
0x5EB8D2: call    sub_5E6CD0
0x5EB8D7: test    al, al
0x5EB8D9: jnz     loc_5EBA5A
0x5EB8DF: mov     eax, [esi]
0x5EB8E1: mov     edx, [eax+350h]
0x5EB8E7: mov     ecx, esi
0x5EB8E9: call    edx
0x5EB8EB: test    al, al
0x5EB8ED: jnz     loc_5EBA5A
0x5EB8F3: mov     eax, [esi]
0x5EB8F5: mov     edx, [eax+338h]
0x5EB8FB: mov     ecx, esi
0x5EB8FD: call    edx
0x5EB8FF: test    eax, eax
0x5EB901: jz      loc_5EBA5A
0x5EB907: mov     eax, [esi]
0x5EB909: mov     edx, [eax+338h]
0x5EB90F: mov     ecx, esi
0x5EB911: call    edx
0x5EB913: mov     ecx, ds:0B333C4h
0x5EB919: cmp     eax, ecx
0x5EB91B: jnz     loc_5EBA40
0x5EB921: mov     eax, [ecx+110h]
0x5EB927: cmp     eax, ds:0B37D18h
0x5EB92D: jg      loc_5EBA40
0x5EB933: push    esi
0x5EB934: call    Actor__CanUSeDoor?
0x5EB939: add     esp, 4
0x5EB93C: test    al, al
0x5EB93E: jz      loc_5EBA40
0x5EB944: mov     edx, [esi]
0x5EB946: mov     eax, [edx+338h]
0x5EB94C: mov     ecx, esi
0x5EB94E: call    eax
0x5EB950: cmp     dword ptr [eax+58h], 0
0x5EB954: jz      loc_5EBA40
0x5EB95A: mov     edx, [esi]
0x5EB95C: mov     eax, [edx+338h]
0x5EB962: mov     ecx, esi
0x5EB964: call    eax
0x5EB966: mov     ecx, eax; this
0x5EB968: call    Actor__GetProcessLevel
0x5EB96D: test    eax, eax
0x5EB96F: jnz     loc_5EBA40
0x5EB975: mov     ecx, [esi+58h]
0x5EB978: mov     edi, [ecx]
0x5EB97A: mov     ecx, offset TimeGlobals
0x5EB97F: call    TimeGlobals_GetGameHour
0x5EB984: fsub    qword ptr ds:0A2F928h
0x5EB98A: mov     edx, [edi+1Ch]
0x5EB98D: push    ecx
0x5EB98E: mov     ecx, [esi+58h]
0x5EB991: fstp    [esp+3Ch+var_20]
0x5EB995: fld     [esp+3Ch+var_20]
0x5EB999: fstp    [esp+3Ch+var_3C]
0x5EB99C: call    edx
0x5EB99E: mov     eax, [esi]
0x5EB9A0: mov     edx, [eax+338h]
0x5EB9A6: mov     ecx, esi
0x5EB9A8: call    edx
0x5EB9AA: fld     dword ptr ds:0A46C30h
0x5EB9B0: mov     eax, ds:0B333C4h
0x5EB9B5: fstp    [esp+38h+var_20]
0x5EB9B9: add     dword ptr [eax+110h], 1
0x5EB9C0: mov     edi, ds:0B333C4h
0x5EB9C6: add     edi, 570h
0x5EB9CC: cmp     dword ptr [edi], 0
0x5EB9CF: jz      short loc_5EBA26
0x5EB9D1: mov     ecx, esi; this
0x5EB9D3: call    TESObjectREFR_GetParentCell
0x5EB9D8: mov     ecx, [edi]; this
0x5EB9DA: mov     ebx, eax
0x5EB9DC: call    TESObjectREFR_GetParentCell
0x5EB9E1: cmp     ebx, eax
0x5EB9E3: jnz     short loc_5EBA26
0x5EB9E5: mov     eax, ds:0B333C4h
0x5EB9EA: mov     ecx, [eax+570h]
0x5EB9F0: mov     edx, [ecx]
0x5EB9F2: mov     eax, [edx+174h]
0x5EB9F8: call    eax
0x5EB9FA: mov     edx, [esi]
0x5EB9FC: push    eax
0x5EB9FD: mov     eax, [edx+174h]
0x5EBA03: lea     ecx, [esp+3Ch+var_18]
0x5EBA07: push    ecx
0x5EBA08: mov     ecx, esi
0x5EBA0A: call    eax
0x5EBA0C: mov     ecx, eax
0x5EBA0E: call    sub_4121A0
0x5EBA13: lea     ecx, [esp+38h+var_18]
0x5EBA17: call    sub_404C90
0x5EBA1C: fdiv    qword ptr ds:0A3DDE0h
0x5EBA22: fstp    [esp+38h+var_20]
0x5EBA26: mov     ecx, [esi+58h]
0x5EBA29: fld     [esp+38h+var_20]
0x5EBA2D: mov     edx, [ecx]
0x5EBA2F: mov     eax, [edx+164h]
0x5EBA35: push    ecx
0x5EBA36: fstp    [esp+3Ch+var_3C]
0x5EBA39: call    eax
0x5EBA3B: jmp     loc_5EBB13
0x5EBA40: mov     edx, [esi]
0x5EBA42: mov     eax, [edx+340h]
0x5EBA48: push    0
0x5EBA4A: mov     ecx, esi
0x5EBA4C: call    eax
0x5EBA4E: mov     ecx, esi; int
0x5EBA50: call    sub_5EAE70
0x5EBA55: jmp     loc_5EBB13
0x5EBA5A: mov     edx, [esi]
0x5EBA5C: mov     eax, [edx+330h]
0x5EBA62: mov     ecx, esi
0x5EBA64: call    eax
0x5EBA66: test    eax, eax
0x5EBA68: jz      short loc_5EBA4E
0x5EBA6A: mov     ecx, ds:0B333C4h
0x5EBA70: mov     edx, [esi]
0x5EBA72: mov     eax, [edx+330h]
0x5EBA78: push    ecx
0x5EBA79: mov     ecx, esi
0x5EBA7B: call    eax
0x5EBA7D: mov     ecx, eax
0x5EBA7F: call    sub_6162D0
0x5EBA84: jmp     loc_5EBB13
0x5EBA89: mov     edx, [esi]
0x5EBA8B: mov     eax, [edx+78h]
0x5EBA8E: mov     ecx, esi
0x5EBA90: call    eax
0x5EBA92: test    al, al
0x5EBA94: jz      short loc_5EBA9F
0x5EBA96: cmp     byte ptr [esi+0CAh], 0
0x5EBA9D: jnz     short loc_5EBACA
0x5EBA9F: mov     ecx, esi
0x5EBAA1: call    sub_5E3220
0x5EBAA6: test    al, al
0x5EBAA8: jnz     short loc_5EBAB5
0x5EBAAA: mov     ecx, esi
0x5EBAAC: call    sub_5E30A0
0x5EBAB1: test    al, al
0x5EBAB3: jz      short loc_5EBB13
0x5EBAB5: mov     ecx, [esi+58h]
0x5EBAB8: mov     edx, [ecx]
0x5EBABA: mov     eax, [edx+0CCh]
0x5EBAC0: call    eax
0x5EBAC2: cmp     eax, ds:0B333C4h
0x5EBAC8: jnz     short loc_5EBB13
0x5EBACA: mov     ecx, [esi+58h]
0x5EBACD: mov     edi, [ecx]
0x5EBACF: mov     ecx, offset TimeGlobals
0x5EBAD4: call    TimeGlobals_GetGameHour
0x5EBAD9: fsub    qword ptr ds:0A2F928h
0x5EBADF: mov     edx, [edi+1Ch]
0x5EBAE2: push    ecx
0x5EBAE3: mov     ecx, [esi+58h]
0x5EBAE6: fstp    [esp+3Ch+var_20]
0x5EBAEA: fld     [esp+3Ch+var_20]
0x5EBAEE: fstp    [esp+3Ch+var_3C]
0x5EBAF1: call    edx
0x5EBAF3: push    3
0x5EBAF5: push    esi
0x5EBAF6: mov     ecx, offset ActorProcessManager_ptr
0x5EBAFB: call    sub_674550
0x5EBB00: push    0
0x5EBB02: push    0
0x5EBB04: push    0
0x5EBB06: push    3
0x5EBB08: push    esi
0x5EBB09: mov     ecx, offset ActorProcessManager_ptr
0x5EBB0E: call    sub_673A90
0x5EBB13: mov     byte ptr [esi+0CAh], 1
0x5EBB1A: mov     al, 1
0x5EBB1C: mov     ecx, dword ptr [esp+38h+var_C]
0x5EBB20: mov     large fs:0, ecx
0x5EBB27: pop     ecx
0x5EBB28: pop     edi
0x5EBB29: pop     esi
0x5EBB2A: pop     ebp
0x5EBB2B: pop     ebx
0x5EBB2C: add     esp, 24h
0x5EBB2F: retn
