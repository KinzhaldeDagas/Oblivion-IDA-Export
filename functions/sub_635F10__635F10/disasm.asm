0x635F10: sub     esp, 28h
0x635F13: push    ebx
0x635F14: push    ebp
0x635F15: push    esi
0x635F16: mov     esi, ecx
0x635F18: mov     eax, [esi]
0x635F1A: mov     edx, [eax+184h]
0x635F20: push    edi
0x635F21: call    edx
0x635F23: mov     ebx, eax
0x635F25: cmp     byte ptr [ebx+20h], 9
0x635F29: mov     byte ptr [esp+38h+var_20], 0
0x635F2E: jnz     short loc_635F4A
0x635F30: mov     ecx, [ebx+28h]
0x635F33: mov     edi, [esi]
0x635F35: mov     byte ptr [esp+38h+var_20], 1
0x635F3A: call    sub_569E60
0x635F3F: push    eax
0x635F40: mov     eax, [edi+484h]
0x635F46: mov     ecx, esi
0x635F48: call    eax
0x635F4A: mov     edi, [esp+3Ch]
0x635F4E: push    edi
0x635F4F: lea     ecx, [esp+40h+var_1C]
0x635F53: push    ecx
0x635F54: mov     ecx, ebx
0x635F56: call    sub_566B30
0x635F5B: push    eax; pointXYZ
0x635F5C: mov     ecx, edi; this
0x635F5E: call    TESObjectREFR__GetDistanceToPoint; Returns the Euclidean 3D distance from TESObjectREFR position fields at +0x2C/+0x30/+0x34 to pointXYZ. The second social scan uses this result against its effective conversation radius.
0x635F63: fstp    [esp+3Ch+var_20]
0x635F67: mov     ecx, [ebx+24h]
0x635F6A: xor     ebp, ebp
0x635F6C: test    ecx, ecx
0x635F6E: mov     [esp+3Ch+var_2C], ebp
0x635F72: jz      short loc_635F7F
0x635F74: call    sub_5697E0
0x635F79: mov     ebp, eax
0x635F7B: mov     [esp+3Ch+var_2C], eax
0x635F7F: mov     eax, [esi+30h]
0x635F82: test    eax, eax
0x635F84: jz      short loc_635F95
0x635F86: cmp     dword ptr [esi+0C0h], 0
0x635F8D: jnz     short loc_635F95
0x635F8F: mov     ebp, eax
0x635F91: mov     [esp+3Ch+var_2C], ebp
0x635F95: test    ebp, ebp
0x635F97: jz      loc_636444
0x635F9D: mov     ecx, ebp
0x635F9F: call    sub_4D74B0
0x635FA4: test    al, al
0x635FA6: jz      loc_63606E
0x635FAC: mov     edx, [edi]
0x635FAE: mov     eax, [edx+174h]
0x635FB4: mov     ecx, edi
0x635FB6: call    eax
0x635FB8: mov     edx, [esi]
0x635FBA: mov     eax, [edx+36Ch]
0x635FC0: mov     ecx, esi
0x635FC2: call    eax
0x635FC4: cmp     eax, 4
0x635FC7: jz      short loc_636029
0x635FC9: mov     edx, [esi]
0x635FCB: mov     eax, [edx+36Ch]
0x635FD1: mov     ecx, esi
0x635FD3: call    eax
0x635FD5: cmp     eax, 9
0x635FD8: jz      short loc_636029
0x635FDA: cmp     byte ptr [esi+0D0h], 0
0x635FE1: jz      loc_63606E
0x635FE7: mov     ecx, [esi+120h]
0x635FED: test    ecx, ecx
0x635FEF: jz      short loc_63606E
0x635FF1: push    0
0x635FF3: call    sub_4D72C0
0x635FF8: test    al, al
0x635FFA: jz      short loc_63606E
0x635FFC: cmp     byte ptr [esp+3Ch+arg_4], 0
0x636001: jz      short loc_636012
0x636003: mov     edx, [esi]
0x636005: mov     eax, [edx+188h]
0x63600B: push    1
0x63600D: push    edi
0x63600E: mov     ecx, esi
0x636010: call    eax
0x636012: mov     edx, [esi]
0x636014: mov     eax, [edx+194h]
0x63601A: push    edi
0x63601B: mov     ecx, esi
0x63601D: call    eax
0x63601F: pop     edi
0x636020: pop     esi
0x636021: pop     ebp
0x636022: pop     ebx
0x636023: add     esp, 28h
0x636026: retn    10h
0x636029: mov     ecx, [ebx+1Ch]
0x63602C: shr     ecx, 1
0x63602E: test    cl, 1
0x636031: jz      short loc_636041
0x636033: cmp     dword ptr [ebx+28h], 0
0x636037: jnz     short loc_636041
0x636039: fldz
0x63603B: fstp    dword ptr [esi+1ACh]
0x636041: cmp     byte ptr [esp+3Ch+arg_4], 0
0x636046: jz      short loc_636057
0x636048: mov     edx, [esi]
0x63604A: mov     eax, [edx+188h]
0x636050: push    1
0x636052: push    edi
0x636053: mov     ecx, esi
0x636055: call    eax
0x636057: mov     edx, [esi]
0x636059: mov     eax, [edx+194h]
0x63605F: push    edi
0x636060: mov     ecx, esi
0x636062: call    eax
0x636064: pop     edi
0x636065: pop     esi
0x636066: pop     ebp
0x636067: pop     ebx
0x636068: add     esp, 28h
0x63606B: retn    10h
0x63606E: mov     edx, [edi]
0x636070: mov     eax, [edx+380h]
0x636076: mov     ecx, edi
0x636078: call    eax
0x63607A: cmp     ebp, eax
0x63607C: jnz     short loc_6360DD
0x63607E: mov     edx, [ebp+0]
0x636081: mov     eax, [edx+198h]
0x636087: push    0
0x636089: mov     ecx, ebp
0x63608B: call    eax
0x63608D: test    al, al
0x63608F: jz      short loc_6360DD
0x636091: mov     edx, [edi]
0x636093: mov     eax, [edx+380h]
0x636099: mov     ecx, edi
0x63609B: call    eax
0x63609D: mov     ebx, eax
0x63609F: mov     edx, [ebx]
0x6360A1: mov     eax, [edx+384h]
0x6360A7: push    0
0x6360A9: mov     ecx, ebx
0x6360AB: call    eax
0x6360AD: mov     ecx, [ebx+58h]
0x6360B0: mov     dword ptr [ecx+8], 0
0x6360B7: mov     edx, [esi]
0x6360B9: mov     eax, [edx+178h]
0x6360BF: push    0
0x6360C1: mov     ecx, esi
0x6360C3: call    eax
0x6360C5: mov     edx, [edi]
0x6360C7: mov     eax, [edx+384h]
0x6360CD: push    0
0x6360CF: mov     ecx, edi
0x6360D1: call    eax
0x6360D3: pop     edi
0x6360D4: pop     esi
0x6360D5: pop     ebp
0x6360D6: pop     ebx
0x6360D7: add     esp, 28h
0x6360DA: retn    10h
0x6360DD: mov     ecx, ebp
0x6360DF: call    sub_4D74B0
0x6360E4: test    al, al
0x6360E6: jz      short loc_636111
0x6360E8: cmp     byte ptr [esi+0D0h], 0
0x6360EF: jnz     short loc_636111
0x6360F1: cmp     dword ptr [esi+120h], 0
0x6360F8: jnz     short loc_636111
0x6360FA: cmp     byte ptr [esi+124h], 7Fh
0x636101: jz      short loc_636111
0x636103: mov     byte ptr [esi+0D0h], 1
0x63610A: mov     byte ptr [esi+124h], 7Fh
0x636111: mov     ecx, ebp
0x636113: call    sub_4D74B0
0x636118: test    al, al
0x63611A: jz      loc_636444
0x636120: cmp     byte ptr [esi+0D0h], 0
0x636127: jz      loc_636444
0x63612D: cmp     dword ptr [esi+120h], 0
0x636134: jnz     short loc_63613C
0x636136: mov     [esi+120h], ebp
0x63613C: cmp     byte ptr [esi+124h], 7Fh
0x636143: jnz     loc_636219
0x636149: mov     ecx, edi; this
0x63614B: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x636150: mov     ecx, [esi+120h]; this
0x636156: mov     ebp, eax
0x636158: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x63615D: cmp     ebp, eax
0x63615F: jnz     loc_636219
0x636165: mov     edx, [edi]
0x636167: mov     eax, [edx+174h]
0x63616D: mov     ecx, edi
0x63616F: call    eax
0x636171: mov     ecx, [eax]
0x636173: mov     [esp+40h+var_20], ecx
0x636177: mov     edx, [eax+4]
0x63617A: lea     ecx, [esp+40h+var_4]
0x63617E: push    ecx
0x63617F: mov     ecx, [esi+120h]
0x636185: lea     ebp, [esi+128h]
0x63618B: push    ebp
0x63618C: push    1
0x63618E: mov     [esp+4Ch+var_1C], edx
0x636192: mov     eax, [eax+8]
0x636195: push    1
0x636197: lea     edx, [esp+50h+var_20]
0x63619B: push    edx
0x63619C: mov     [esp+54h+var_18], eax
0x6361A0: mov     [esp+54h+var_4], 0
0x6361A8: call    sub_4DBAE0
0x6361AD: test    al, al
0x6361AF: jz      loc_6362A4
0x6361B5: mov     ecx, ds:0B333C4h
0x6361BB: cmp     edi, ecx
0x6361BD: jnz     short loc_636237
0x6361BF: mov     eax, [ecx]
0x6361C1: mov     edx, [eax+1CCh]
0x6361C7: push    ebp
0x6361C8: call    edx
0x6361CA: movzx   edx, word ptr [esi+134h]
0x6361D1: mov     dword ptr [esp+44h+var_30], edx
0x6361D5: mov     ecx, ds:0B333C4h
0x6361DB: mov     eax, [ecx]
0x6361DD: fild    dword ptr [esp+44h+var_30]
0x6361E1: mov     eax, [eax+1E8h]
0x6361E7: push    ecx
0x6361E8: fdiv    qword ptr ds:0A2FC70h
0x6361EE: fstp    dword ptr [esp+48h+var_30]
0x6361F2: fld     dword ptr [esp+48h+var_30]
0x6361F6: fstp    [esp+48h+var_48]
0x6361F9: call    eax
0x6361FB: mov     ecx, ds:0B333C4h
0x636201: push    0
0x636203: call    sub_5E0610; 3DTheft decode: Actor_SetMovementFlag wrapper calls process vfunc +0x2C4 with enabled=true.
0x636208: mov     cl, byte ptr [esp+48h+var_C]
0x63620C: mov     [esi+124h], cl
0x636212: mov     byte ptr [esi+0D0h], 0
0x636219: mov     edx, [esi]
0x63621B: mov     eax, [edx+36Ch]
0x636221: mov     ecx, esi
0x636223: call    eax
0x636225: test    eax, eax
0x636227: jz      loc_63638B
0x63622D: mov     byte ptr [esp+48h+var_C], 1
0x636232: jmp     loc_63645F
0x636237: mov     edx, [esi]
0x636239: mov     ecx, [esi+120h]; this
0x63623F: mov     [esp+40h+var_2C], edx
0x636243: call    TESObjectREFR_GetWorldSpace
0x636248: mov     ecx, [esi+120h]; this
0x63624E: push    eax
0x63624F: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x636254: mov     ecx, [ebp+0]
0x636257: mov     edx, [ebp+4]
0x63625A: push    eax
0x63625B: sub     esp, 0Ch
0x63625E: mov     eax, esp
0x636260: mov     [eax], ecx
0x636262: mov     ecx, [ebp+8]
0x636265: mov     [eax+4], edx
0x636268: mov     edx, [esp+54h+var_2C]
0x63626C: mov     [eax+8], ecx
0x63626F: mov     eax, [edx+3DCh]
0x636275: push    edi
0x636276: mov     ecx, esi
0x636278: call    eax
0x63627A: test    al, al
0x63627C: jz      loc_636FBE
0x636282: mov     cl, byte ptr [esp+58h+var_1C]
0x636286: mov     [esi+124h], cl
0x63628C: mov     ecx, [esi+34h]
0x63628F: test    ecx, ecx
0x636291: jz      short loc_636219
0x636293: mov     edx, [ecx]
0x636295: mov     eax, [edx+28h]
0x636298: push    edi
0x636299: call    eax
0x63629B: fstp    [esp+5Ch+var_40]
0x63629F: jmp     loc_636219
0x6362A4: mov     ecx, [esi+120h]; this
0x6362AA: push    0; unk000
0x6362AC: push    edi; a2
0x6362AD: call    TesObjectREF_GetDistance
0x6362B2: fcomp   qword ptr ds:0A37478h
0x6362B8: fnstsw  ax
0x6362BA: test    ah, 41h
0x6362BD: jnz     loc_636219
0x6362C3: mov     ecx, [esi]
0x6362C5: mov     [esp+40h], ecx
0x6362C9: mov     ecx, [esi+120h]
0x6362CF: mov     edx, [ecx]
0x6362D1: mov     eax, [edx+174h]
0x6362D7: call    eax
0x6362D9: mov     ecx, [esi+120h]; this
0x6362DF: mov     ebx, eax
0x6362E1: call    TESObjectREFR_GetWorldSpace
0x6362E6: mov     ecx, [esi+120h]; this
0x6362EC: push    eax
0x6362ED: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6362F2: mov     ecx, [ebx]
0x6362F4: mov     edx, [ebx+4]
0x6362F7: push    eax
0x6362F8: sub     esp, 0Ch
0x6362FB: mov     eax, esp
0x6362FD: mov     [eax], ecx
0x6362FF: mov     ecx, [ebx+8]
0x636302: mov     [eax+4], edx
0x636305: mov     edx, [esp+54h]
0x636309: mov     [eax+8], ecx
0x63630C: mov     eax, [edx+3DCh]
0x636312: push    edi
0x636313: mov     ecx, esi
0x636315: call    eax
0x636317: test    al, al
0x636319: jz      loc_636FBE
0x63631F: cmp     byte ptr [esp+58h+var_14], 0
0x636324: jz      short loc_636335
0x636326: mov     edx, [esi]
0x636328: mov     eax, [edx+188h]
0x63632E: push    1
0x636330: push    edi
0x636331: mov     ecx, esi
0x636333: call    eax
0x636335: fldz
0x636337: push    ecx
0x636338: mov     ecx, ebp
0x63633A: fstp    [esp+64h+var_64]; float
0x63633D: mov     dword ptr [esi+120h], 0
0x636347: call    sub_6FAEE0
0x63634C: mov     byte ptr [esi+136h], 0
0x636353: mov     ecx, ds:0B3F9A8h
0x636359: mov     [ebp+0], ecx
0x63635C: mov     edx, ds:0B3F9ACh
0x636362: mov     [ebp+4], edx
0x636365: mov     eax, ds:0B3F9B0h
0x63636A: mov     edx, [esi]
0x63636C: mov     [ebp+8], eax
0x63636F: mov     eax, [edx+194h]
0x636375: push    edi
0x636376: mov     ecx, esi
0x636378: mov     byte ptr [esi+124h], 7Fh
0x63637F: call    eax
0x636381: pop     edi
0x636382: pop     esi
0x636383: pop     ebp
0x636384: pop     ebx
0x636385: add     esp, 28h
0x636388: retn    10h
0x63638B: mov     edx, [esi]
0x63638D: mov     eax, [edx+36Ch]
0x636393: mov     ecx, esi
0x636395: call    eax
0x636397: test    eax, eax
0x636399: jnz     loc_636433
0x63639F: mov     al, [esi+124h]
0x6363A5: cmp     al, 7Fh
0x6363A7: jz      loc_636433
0x6363AD: movzx   ecx, al
0x6363B0: push    ecx
0x6363B1: mov     ecx, [esi+120h]
0x6363B7: call    sub_4D72C0
0x6363BC: test    al, al
0x6363BE: jz      short loc_636433
0x6363C0: cmp     byte ptr [esi+0D0h], 0
0x6363C7: jnz     short loc_636433
0x6363C9: fldz
0x6363CB: push    ecx
0x6363CC: lea     ebx, [esi+128h]
0x6363D2: fstp    [esp+4Ch+var_4C]; float
0x6363D5: mov     ecx, ebx
0x6363D7: mov     dword ptr [esi+120h], 0
0x6363E1: call    sub_6FAEE0
0x6363E6: mov     byte ptr [esi+136h], 0
0x6363ED: mov     edx, ds:0B3F9A8h
0x6363F3: mov     [ebx], edx
0x6363F5: mov     eax, ds:0B3F9ACh
0x6363FA: mov     edx, [esi]
0x6363FC: mov     [ebx+4], eax
0x6363FF: mov     ecx, ds:0B3F9B0h
0x636405: mov     eax, [edx+194h]
0x63640B: mov     [ebx+8], ecx
0x63640E: push    edi
0x63640F: mov     ecx, esi
0x636411: mov     byte ptr [esi+124h], 7Fh
0x636418: call    eax
0x63641A: mov     edx, [esi]
0x63641C: mov     eax, [edx+188h]
0x636422: push    1
0x636424: push    edi
0x636425: mov     ecx, esi
0x636427: call    eax
0x636429: pop     edi
0x63642A: pop     esi
0x63642B: pop     ebp
0x63642C: pop     ebx
0x63642D: add     esp, 28h
0x636430: retn    10h
0x636433: fld     dword ptr ds:0A30634h
0x636439: push    ecx
0x63643A: mov     ecx, dword ptr [esp+4Ch+var_30]
0x63643E: fstp    [esp+4Ch+var_4C]
0x636441: push    ecx
0x636442: jmp     short loc_636453
0x636444: fld     dword ptr ds:0A30634h
0x63644A: mov     edx, dword ptr [esp+40h+var_28]
0x63644E: push    ecx
0x63644F: fstp    [esp+44h+var_44]
0x636452: push    edx; char
0x636453: push    edi; int
0x636454: mov     ecx, ebx
0x636456: call    sub_566DC0
0x63645B: mov     byte ptr [esp+48h+var_C], al
0x63645F: push    1
0x636461: push    edi
0x636462: mov     ecx, ebx
0x636464: call    sub_5677B0
0x636469: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x63646E: cmp     byte ptr [ebx+20h], 5
0x636472: mov     [esp+48h+var_34], eax
0x636476: jnz     short loc_63649F
0x636478: push    edi
0x636479: mov     ecx, ebx
0x63647B: call    sub_566A40
0x636480: test    eax, eax
0x636482: jz      short loc_63649F
0x636484: push    edi
0x636485: mov     ecx, ebx
0x636487: call    sub_566A40
0x63648C: mov     ecx, eax; this
0x63648E: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x636493: test    al, al
0x636495: jz      short loc_63649F
0x636497: mov     [esp+48h+var_34], 14h
0x63649F: cmp     dword ptr [esi+30h], 0
0x6364A3: jnz     short loc_6364AC
0x6364A5: cmp     [esp+48h+var_30], 0
0x6364AA: jz      short loc_6364B4
0x6364AC: mov     [esp+48h+var_34], 0Ah
0x6364B4: cmp     byte ptr [esp+48h+var_C], 0
0x6364B9: jnz     loc_636A55
0x6364BF: mov     ecx, esi
0x6364C1: call    sub_64ADA0
0x6364C6: test    al, al
0x6364C8: jnz     loc_636A55
0x6364CE: cmp     byte ptr [esp+48h+var_8], al
0x6364D2: jnz     short loc_63650E
0x6364D4: cmp     [esi+0D0h], al
0x6364DA: jz      loc_63670C
0x6364E0: fld     dword ptr ds:0A30634h
0x6364E6: mov     eax, dword ptr [esp+48h+var_30]
0x6364EA: push    ecx
0x6364EB: fstp    [esp+4Ch+var_4C]; float
0x6364EE: push    eax; char
0x6364EF: push    edi; int
0x6364F0: mov     ecx, ebx
0x6364F2: call    sub_566DC0
0x6364F7: test    al, al
0x6364F9: jnz     loc_63670C
0x6364FF: mov     ecx, esi
0x636501: call    sub_64ADA0
0x636506: test    al, al
0x636508: jnz     loc_63670C
0x63650E: mov     edx, [edi]
0x636510: mov     eax, [edx+380h]
0x636516: mov     ecx, edi
0x636518: call    eax
0x63651A: test    eax, eax
0x63651C: jnz     short loc_636556
0x63651E: mov     edx, [esi]
0x636520: mov     eax, [edx+36Ch]
0x636526: mov     ecx, esi
0x636528: call    eax
0x63652A: cmp     eax, 4
0x63652D: jz      short loc_636540
0x63652F: mov     edx, [esi]
0x636531: mov     eax, [edx+36Ch]
0x636537: mov     ecx, esi
0x636539: call    eax
0x63653B: cmp     eax, 9
0x63653E: jnz     short loc_636556
0x636540: mov     edx, [edi]
0x636542: mov     eax, [edx+320h]
0x636548: mov     ecx, edi
0x63654A: call    eax
0x63654C: pop     edi
0x63654D: pop     esi
0x63654E: pop     ebp
0x63654F: pop     ebx
0x636550: add     esp, 28h
0x636553: retn    10h
0x636556: mov     ebp, [esp+48h+var_38]
0x63655A: test    ebp, ebp
0x63655C: jz      loc_6366B8
0x636562: mov     ecx, ebp
0x636564: call    sub_4D74B0
0x636569: test    al, al
0x63656B: mov     edx, [edi]
0x63656D: mov     ecx, edi
0x63656F: jz      loc_636660
0x636575: mov     eax, [edx+174h]
0x63657B: call    eax
0x63657D: mov     ecx, [eax]
0x63657F: mov     dword ptr [esp+48h+var_28], ecx
0x636583: mov     edx, [eax+4]
0x636586: lea     ecx, [esp+48h+var_4]
0x63658A: push    ecx
0x63658B: mov     ecx, [esi+120h]
0x636591: lea     ebp, [esi+128h]
0x636597: push    ebp
0x636598: push    1
0x63659A: mov     [esp+54h+var_24], edx
0x63659E: mov     eax, [eax+8]
0x6365A1: push    1
0x6365A3: lea     edx, [esp+58h+var_28]
0x6365A7: push    edx
0x6365A8: mov     [esp+5Ch+var_20], eax
0x6365AC: mov     [esp+5Ch+var_4], 0
0x6365B4: call    sub_4DBAE0
0x6365B9: test    al, al
0x6365BB: mov     eax, [esi]
0x6365BD: push    edi
0x6365BE: jz      short loc_636630
0x6365C0: mov     ecx, ebx
0x6365C2: mov     [esp+4Ch+var_8], eax
0x6365C6: call    sub_566940
0x6365CB: push    eax
0x6365CC: push    edi
0x6365CD: mov     ecx, ebx
0x6365CF: call    sub_566A40
0x6365D4: mov     ecx, [ebp+0]
0x6365D7: mov     edx, [ebp+4]
0x6365DA: push    eax
0x6365DB: sub     esp, 0Ch
0x6365DE: mov     eax, esp
0x6365E0: mov     [eax], ecx
0x6365E2: mov     ecx, [ebp+8]
0x6365E5: mov     [eax+4], edx
0x6365E8: mov     edx, [esp+5Ch+var_8]
0x6365EC: mov     [eax+8], ecx
0x6365EF: mov     eax, [edx+3DCh]
0x6365F5: push    edi
0x6365F6: mov     ecx, esi
0x6365F8: call    eax
0x6365FA: test    al, al
0x6365FC: jz      loc_636FBE
0x636602: mov     ecx, [esp+60h+var_50]
0x636606: mov     dl, byte ptr [esp+60h+var_1C]
0x63660A: mov     [esi+120h], ecx
0x636610: mov     ecx, [esi+34h]
0x636613: test    ecx, ecx
0x636615: mov     [esi+124h], dl
0x63661B: jz      loc_63670C
0x636621: mov     eax, [ecx]
0x636623: mov     edx, [eax+28h]
0x636626: push    edi
0x636627: call    edx
0x636629: fstp    st
0x63662B: jmp     loc_63670C
0x636630: mov     edx, [eax+194h]
0x636636: mov     ecx, esi
0x636638: call    edx
0x63663A: mov     ebx, [ebx+18h]
0x63663D: mov     edi, [esi]
0x63663F: push    ebx
0x636640: call    sub_673980; 3DTheft: returns package procedure row length for procedureArrayIndex. Rows used here include Follow row 7 and Flee row 0x13.
0x636645: sub     eax, 1
0x636648: add     esp, 4
0x63664B: push    eax
0x63664C: mov     eax, [edi+17Ch]
0x636652: mov     ecx, esi
0x636654: call    eax
0x636656: pop     edi
0x636657: pop     esi
0x636658: pop     ebp
0x636659: pop     ebx
0x63665A: add     esp, 28h
0x63665D: retn    10h
0x636660: mov     eax, [edx+380h]
0x636666: call    eax
0x636668: cmp     ebp, eax
0x63666A: jnz     short loc_6366B8
0x63666C: mov     edx, [edi]
0x63666E: mov     eax, [edx+380h]
0x636A55: cmp     byte ptr [ebx+20h], 3
0x636A59: mov     ebp, [esp+48h+var_38]
0x636A5D: jnz     short loc_636AA6
0x636A5F: test    ebp, ebp
0x636A61: jz      short loc_636AA6
0x636A63: mov     ecx, ebp
0x636A65: call    sub_4D74B0
0x636A6A: test    al, al
0x636A6C: jz      short loc_636AA6
0x636A6E: cmp     byte ptr [esp+48h+var_C], 0
0x636A73: jz      short loc_636AA6
0x636A75: mov     ecx, edi
0x636A77: call    sub_5E4400
0x636A7C: test    eax, eax
0x636A7E: jnz     short loc_636AA6
0x636A80: mov     eax, [esi]
0x636A82: mov     edx, [eax+188h]
0x636A88: push    1
0x636A8A: push    edi
0x636A8B: mov     ecx, esi
0x636A8D: call    edx
0x636A8F: mov     eax, [esi]
0x636A91: mov     edx, [eax+194h]
0x636A97: push    edi
0x636A98: mov     ecx, esi
0x636A9A: call    edx
0x636A9C: pop     edi
0x636A9D: pop     esi
0x636A9E: pop     ebp
0x636A9F: pop     ebx
0x636AA0: add     esp, 28h
0x636AA3: retn    10h
0x636AA6: cmp     dword ptr [esi+1CCh], 0
0x636AAD: jz      short loc_636AC4
0x636AAF: push    1
0x636AB1: push    ebp
0x636AB2: call    sub_607B90
0x636AB7: add     esp, 8
0x636ABA: mov     dword ptr [esi+1CCh], 0
0x636AC4: test    ebp, ebp
0x636AC6: jz      loc_636BC3
0x636ACC: mov     ecx, ebp
0x636ACE: call    sub_4D74B0
0x636AD3: test    al, al
0x636AD5: jz      loc_636BC3
0x636ADB: cmp     byte ptr [ebx+20h], 5
0x636ADF: jz      loc_636BC3
0x636AE5: cmp     byte ptr [esp+48h+var_C], 0
0x636AEA: jz      loc_636BC3
0x636AF0: cmp     dword ptr [esi+120h], 0
0x636AF7: jnz     short loc_636AFF
0x636AF9: mov     [esi+120h], ebp
0x636AFF: mov     ecx, edi; this
0x636B01: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x636B06: mov     ecx, [esi+120h]; this
0x636B0C: mov     ebp, eax
0x636B0E: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x636B13: cmp     ebp, eax
0x636B15: jnz     loc_636FBE
0x636B1B: mov     eax, [esi]
0x636B1D: mov     edx, [eax+36Ch]
0x636B23: mov     ecx, esi
0x636B25: call    edx
0x636B27: cmp     eax, 4
0x636B2A: jz      short loc_636B7F
0x636B2C: mov     eax, [esi]
0x636B2E: mov     edx, [eax+36Ch]
0x636B34: mov     ecx, esi
0x636B36: call    edx
0x636B38: cmp     eax, 9
0x636B3B: jz      short loc_636B7F
0x636B3D: mov     eax, [esi]
0x636B3F: mov     edx, [eax+1B4h]
0x636B45: push    edi
0x636B46: mov     ecx, esi
0x636B48: call    edx
0x636B4A: test    al, al
0x636B4C: jnz     loc_636FBE
0x636B52: mov     eax, [esi]
0x636B54: mov     edx, [eax+188h]
0x636B5A: push    1
0x636B5C: push    edi
0x636B5D: mov     ecx, esi
0x636B5F: call    edx
0x636B61: mov     eax, [esi]
0x636B63: mov     edx, [eax+194h]
0x636B69: push    edi
0x636B6A: mov     ecx, esi
0x636B6C: mov     dword ptr [esi+30h], 0
0x636B73: call    edx
0x636B75: pop     edi
0x636B76: pop     esi
0x636B77: pop     ebp
0x636B78: pop     ebx
0x636B79: add     esp, 28h
0x636B7C: retn    10h
0x636B7F: mov     eax, [ebx+1Ch]
0x636B82: shr     eax, 1
0x636B84: test    al, 1
0x636B86: jz      short loc_636B96
0x636B88: cmp     dword ptr [ebx+28h], 0
0x636B8C: jnz     short loc_636B96
0x636B8E: fldz
0x636B90: fstp    dword ptr [esi+1ACh]
0x636B96: cmp     byte ptr [esp+48h+var_4], 0
0x636B9B: jz      short loc_636BAC
0x636B9D: mov     edx, [esi]
0x636B9F: mov     eax, [edx+188h]
0x636BA5: push    1
0x636BA7: push    edi
0x636BA8: mov     ecx, esi
0x636BAA: call    eax
0x636BAC: mov     edx, [esi]
0x636BAE: mov     eax, [edx+194h]
0x636BB4: push    edi
0x636BB5: mov     ecx, esi
0x636BB7: call    eax
0x636BB9: pop     edi
0x636BBA: pop     esi
0x636BBB: pop     ebp
0x636BBC: pop     ebx
0x636BBD: add     esp, 28h
0x636BC0: retn    10h
0x636BC3: mov     ecx, esi
0x636BC5: call    sub_64ADA0
0x636BCA: mov     edx, [esi]
0x636BCC: mov     byte ptr [esp+48h+var_8], al
0x636BD0: mov     eax, [edx+194h]
0x636BD6: push    edi
0x636BD7: mov     ecx, esi
0x636BD9: call    eax
0x636BDB: cmp     byte ptr [esp+4Ch+var_C], 0
0x636BE0: jnz     loc_636D33
0x636BE6: test    ebp, ebp
0x636BE8: jz      short loc_636BFF
0x636BEA: mov     edx, [ebp+0]
0x636BED: mov     eax, [edx+170h]
0x636BF3: mov     ecx, ebp
0x636BF5: call    eax
0x636BF7: cmp     eax, ds:0B35EB0h
0x636BFD: jz      short loc_636C18
0x636BFF: mov     ecx, [ebx+24h]
0x636C02: test    ecx, ecx
0x636C04: jz      loc_636D33
0x636C0A: call    sub_569740
0x636C0F: cmp     eax, 3
0x636C12: jnz     loc_636D33
0x636C18: mov     ecx, esi
0x636C1A: call    sub_64ADA0
0x636C1F: test    al, al
0x636C21: jnz     loc_636D33
0x636C27: mov     edx, [edi]
0x636C29: mov     eax, [edx+18Ch]
0x636C2F: mov     ecx, edi
0x636C31: call    eax
0x636C33: test    eax, eax
0x636C35: jnz     loc_636D33
0x636C3B: mov     edx, [esi]
0x636C3D: mov     eax, [edx+4DCh]
0x636C43: mov     ecx, esi
0x636C45: call    eax
0x636C47: test    al, al
0x636C49: jnz     loc_636D33
0x636C4F: test    ebp, ebp
0x636C51: jz      short loc_636C58
0x636C53: fld     dword ptr [ebp+28h]
0x636C56: jmp     short loc_636C6C
0x636C58: mov     edx, [edi]
0x636C5A: mov     edx, [edx+0F0h]
0x636C60: lea     eax, [esp+4Ch+var_20]
0x636C64: push    eax
0x636C65: mov     ecx, edi
0x636C67: call    edx
0x636C69: fld     dword ptr [eax+8]
0x636C6C: fstp    [esp+4Ch+var_C]
0x636C70: fldz
0x636C72: fld     [esp+4Ch+var_C]
0x636C76: fcom    st(1)
0x636C78: fnstsw  ax
0x636C7A: fstp    st(1)
0x636C7C: test    ah, 5
0x636C7F: fld     qword ptr ds:0A3D5B0h
0x636C85: jp      short loc_636CA4
0x636C87: call    unknown_libname_14
0x636C8C: fstp    [esp+4Ch+var_C]
0x636C90: fld     [esp+4Ch+var_C]
0x636C94: fadd    qword ptr ds:0A3D5B0h
0x636C9A: fstp    [esp+4Ch+var_C]
0x636C9E: fld     [esp+4Ch+var_C]
0x636CA2: jmp     short loc_636CC6
0x636CA4: fcom    st(1)
0x636CA6: fnstsw  ax
0x636CA8: test    ah, 41h
0x636CAB: jp      short loc_636CC4
0x636CAD: call    unknown_libname_14
0x636CB2: fstp    [esp+4Ch+var_C]
0x636CB6: fld     [esp+4Ch+var_C]
0x636CBA: fstp    [esp+4Ch+var_C]
0x636CBE: fld     [esp+4Ch+var_C]
0x636CC2: jmp     short loc_636CC6
0x636CC4: fstp    st
0x636CC6: fldz
0x636CC8: lea     eax, [esp+4Ch+var_10]
0x636CCC: push    eax; int
0x636CCD: fstp    [esp+50h+var_10]
0x636CD1: push    ecx
0x636CD2: fstp    [esp+54h+var_54]; float
0x636CD5: push    edi; int
0x636CD6: call    sub_683D80
0x636CDB: fstp    [esp+58h+var_4]
0x636CDF: fld     [esp+58h+var_4]
0x636CE3: add     esp, 0Ch
0x636CE6: fabs
0x636CE8: fstp    [esp+4Ch+var_4]
0x636CEC: fld     [esp+4Ch+var_4]
0x636CF0: fild    dword ptr ds:0B36C18h
0x636CF6: fmul    qword ptr ds:0A31C78h
0x636CFC: fstp    [esp+4Ch+var_4]
0x636D00: fld     [esp+4Ch+var_4]
0x636D04: fcompp
0x636D06: fnstsw  ax
0x636D08: test    ah, 5
0x636D0B: jp      short loc_636D2A
0x636D0D: fld     [esp+4Ch+var_C]
0x636D11: push    1; char
0x636D13: push    ecx
0x636D14: fstp    [esp+54h+var_54]; float
0x636D17: push    edi; Concurrency::details::SchedulerBase *
0x636D18: call    sub_685530
0x636D1D: add     esp, 0Ch
0x636D20: pop     edi
0x636D21: pop     esi
0x636D22: pop     ebp
0x636D23: pop     ebx
0x636D24: add     esp, 28h
0x636D27: retn    10h
0x636D2A: push    30h ; '0'
0x636D2C: mov     ecx, edi
0x636D2E: call    sub_5E05F0; 3DTheft decode: Actor_ClearMovementFlag wrapper calls process vfunc +0x2C4 with enabled=false.
0x636D33: mov     ecx, esi
0x636D35: call    sub_64ADA0
0x636D3A: test    al, al
0x636D3C: jz      short loc_636D57
0x636D3E: mov     eax, [ebx+1Ch]
0x636D41: mov     ecx, eax
0x636D43: shr     ecx, 1
0x636D45: test    cl, 1
0x636D48: jnz     short loc_636D6D
0x636D4A: shr     eax, 2
0x636D4D: test    al, 1
0x636D4F: jz      short loc_636D57
0x636D51: cmp     byte ptr [ebx+20h], 6
0x636D55: jz      short loc_636D6D
0x636D57: cmp     byte ptr [esp+4Ch+var_8], 0
0x636D5C: jz      short loc_636D6D
0x636D5E: mov     edx, [esi]
0x636D60: mov     eax, [edx+188h]
0x636D66: push    1
0x636D68: push    edi
0x636D69: mov     ecx, esi
0x636D6B: call    eax
0x636D6D: mov     ecx, [ebx+1Ch]
0x636D70: shr     ecx, 1
