0x4DAE60: sub     esp, 40h
0x4DAE63: mov     eax, [esp+40h+arg_4]
0x4DAE67: push    ebx
0x4DAE68: push    ebp
0x4DAE69: mov     ebp, [eax+0Ch]
0x4DAE6C: push    esi
0x4DAE6D: mov     esi, [esp+4Ch+arg_0]
0x4DAE71: and     word ptr [esi+0Ch], 0FFBFh
0x4DAE77: push    edi
0x4DAE78: mov     edi, [esi+10h]
0x4DAE7B: mov     ecx, esi
0x4DAE7D: mov     [esp+50h+arg_4], edi
0x4DAE81: call    sub_452A60
0x4DAE86: cmp     esi, [ebp+10h]
0x4DAE89: mov     ebx, eax
0x4DAE8B: jz      short loc_4DAEB0
0x4DAE8D: test    ebx, ebx
0x4DAE8F: jz      short loc_4DAEB0
0x4DAE91: mov     esi, [ebx+8]
0x4DAE94: test    esi, esi
0x4DAE96: jz      short loc_4DAEB0
0x4DAE98: mov     edi, offset aArrow; "Arrow"
0x4DAE9D: mov     ecx, 6
0x4DAEA2: xor     edx, edx
0x4DAEA4: repe cmpsb
0x4DAEA6: jz      loc_4DB02A
0x4DAEAC: mov     edi, [esp+50h+arg_4]
0x4DAEB0: mov     ecx, [ebp+8]
0x4DAEB3: mov     eax, [ecx]
0x4DAEB5: mov     edx, [eax+190h]
0x4DAEBB: call    edx
0x4DAEBD: test    al, al
0x4DAEBF: jz      short loc_4DAEE4
0x4DAEC1: test    ebx, ebx
0x4DAEC3: jz      short loc_4DAEE4
0x4DAEC5: mov     eax, [ebx]
0x4DAEC7: mov     edx, [eax+4]
0x4DAECA: mov     ecx, ebx
0x4DAECC: call    edx
0x4DAECE: test    eax, eax
0x4DAED0: jz      short loc_4DAEE4
0x4DAED2: cmp     eax, offset dword_B35288
0x4DAED7: jz      loc_4DB02A
0x4DAEDD: mov     eax, [eax+4]
0x4DAEE0: test    eax, eax
0x4DAEE2: jnz     short loc_4DAED2
0x4DAEE4: test    edi, edi
0x4DAEE6: jz      loc_4DB02A
0x4DAEEC: push    edi
0x4DAEED: push    offset dword_BA7D84
0x4DAEF2: call    NiRTTI_Cast
0x4DAEF7: mov     esi, eax
0x4DAEF9: add     esp, 8
0x4DAEFC: test    esi, esi
0x4DAEFE: jz      loc_4DB02A
0x4DAF04: mov     eax, [esi]
0x4DAF06: mov     edx, [eax+58h]
0x4DAF09: mov     ecx, esi
0x4DAF0B: call    edx
0x4DAF0D: test    eax, eax
0x4DAF0F: setnz   bl
0x4DAF12: test    bl, bl
0x4DAF14: jz      short loc_4DAF32
0x4DAF16: mov     edi, [esi+8]
0x4DAF19: test    edi, edi
0x4DAF1B: jz      short loc_4DAF32
0x4DAF1D: mov     ecx, esi
0x4DAF1F: call    sub_89F570
0x4DAF24: mov     ecx, edi
0x4DAF26: call    sub_8A6440
0x4DAF2B: mov     ecx, esi
0x4DAF2D: call    sub_89F570
0x4DAF32: mov     al, [ebp+0]
0x4DAF35: test    al, 2
0x4DAF37: jz      short loc_4DAF71
0x4DAF39: mov     ecx, [ebp+8]
0x4DAF3C: and     al, 0FDh
0x4DAF3E: mov     [ebp+0], al
0x4DAF41: mov     eax, [ecx]
0x4DAF43: mov     edx, [eax+174h]
0x4DAF49: call    edx
0x4DAF4B: push    eax
0x4DAF4C: mov     ecx, esi
0x4DAF4E: call    sub_4D69A0
0x4DAF53: mov     ecx, [ebp+8]
0x4DAF56: lea     eax, [esp+50h+var_24]
0x4DAF5A: push    eax
0x4DAF5B: call    sub_4D7AF0
0x4DAF60: push    eax
0x4DAF61: lea     ecx, [esp+54h+var_34]
0x4DAF65: call    sub_7150F0
0x4DAF6A: lea     ecx, [esp+50h+var_34]
0x4DAF6E: push    ecx
0x4DAF6F: jmp     short loc_4DAFA6
0x4DAF71: mov     ecx, ds:0B33B00h
0x4DAF77: push    0Ch; Size
0x4DAF79: lea     edx, [esp+54h+Dst]
0x4DAF7D: push    edx; Dst
0x4DAF7E: call    SaveLoad_LoadData
0x4DAF83: mov     ecx, ds:0B33B00h
0x4DAF89: push    10h; Size
0x4DAF8B: lea     eax, [esp+54h+var_34]
0x4DAF8F: push    eax; Dst
0x4DAF90: call    SaveLoad_LoadData
0x4DAF95: lea     ecx, [esp+50h+Dst]
0x4DAF99: push    ecx
0x4DAF9A: mov     ecx, esi
0x4DAF9C: call    sub_4D69A0
0x4DAFA1: lea     edx, [esp+50h+var_34]
0x4DAFA5: push    edx
0x4DAFA6: mov     ecx, esi
0x4DAFA8: call    sub_4D6A00
0x4DAFAD: mov     al, [ebp+0]
0x4DAFB0: test    al, 4
0x4DAFB2: mov     byte ptr [esp+50h+arg_4], 0
0x4DAFB7: jz      short loc_4DB032
0x4DAFB9: mov     ecx, ds:0B33B00h
0x4DAFBF: push    1; Size
0x4DAFC1: lea     eax, [esp+54h+arg_4]
0x4DAFC5: push    eax; Dst
0x4DAFC6: call    SaveLoad_LoadData
0x4DAFCB: cmp     byte ptr [esp+50h+arg_4], 0
0x4DAFD0: jz      short loc_4DB03D
0x4DAFD2: push    0Ch; Size
0x4DAFD4: lea     ecx, [esp+54h+Dst]
0x4DAFD8: push    ecx; Dst
0x4DAFD9: mov     ecx, ds:0B33B00h
0x4DAFDF: call    SaveLoad_LoadData
0x4DAFE4: mov     ecx, ds:0B33B00h
0x4DAFEA: push    0Ch; Size
0x4DAFEC: lea     edx, [esp+54h+var_34]
0x4DAFF0: push    edx; Dst
0x4DAFF1: call    SaveLoad_LoadData
0x4DAFF6: lea     eax, [esp+50h+Dst]
0x4DAFFA: push    eax
0x4DAFFB: mov     ecx, esi
0x4DAFFD: call    sub_4D9960
0x4DB002: lea     ecx, [esp+50h+var_34]
0x4DB006: push    ecx
0x4DB007: mov     ecx, esi
0x4DB009: call    sub_4D99E0
0x4DB00E: mov     edi, [esi+8]
0x4DB011: test    edi, edi
0x4DB013: jz      short loc_4DB02A
0x4DB015: mov     ecx, esi
0x4DB017: call    sub_89F570
0x4DB01C: mov     ecx, edi
0x4DB01E: call    sub_8A6410
0x4DB023: mov     ecx, esi
0x4DB025: call    sub_89F570
0x4DB02A: pop     edi
0x4DB02B: pop     esi
0x4DB02C: pop     ebp
0x4DB02D: pop     ebx
0x4DB02E: add     esp, 40h
0x4DB031: retn
0x4DB032: test    al, 1
0x4DB034: jz      short loc_4DB03D
0x4DB036: mov     byte ptr [esp+50h+arg_4], 1
0x4DB03B: jmp     short loc_4DAFD2
0x4DB03D: push    offset Vector3_InitValue?
0x4DB042: mov     ecx, esi
0x4DB044: call    sub_4D9960
0x4DB049: push    offset Vector3_InitValue?
0x4DB04E: mov     ecx, esi
0x4DB050: call    sub_4D99E0
0x4DB055: test    bl, bl
0x4DB057: jz      short loc_4DB02A
0x4DB059: mov     edi, [esi+8]
0x4DB05C: test    edi, edi
0x4DB05E: jz      short loc_4DB02A
0x4DB060: mov     ecx, esi
0x4DB062: call    sub_89F570
0x4DB067: mov     ecx, edi
0x4DB069: call    sub_8A6440
0x4DB06E: pop     edi
0x4DB06F: mov     ecx, esi
0x4DB071: pop     esi
0x4DB072: pop     ebp
0x4DB073: pop     ebx
0x4DB074: add     esp, 40h
0x4DB077: jmp     sub_89F570
