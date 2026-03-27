0x61E8A0: sub     esp, 14h
0x61E8A3: push    ebp
0x61E8A4: push    esi
0x61E8A5: mov     esi, ecx
0x61E8A7: mov     ecx, [esi+3Ch]
0x61E8AA: push    edi
0x61E8AB: call    sub_5E0F50
0x61E8B0: mov     edx, [eax]
0x61E8B2: mov     ecx, eax
0x61E8B4: mov     eax, [edx+11Ch]
0x61E8BA: call    eax
0x61E8BC: movsx   ecx, al
0x61E8BF: mov     [esp+20h+var_10], ecx
0x61E8C3: mov     [esp+20h+var_11], 1
0x61E8C8: fild    [esp+20h+var_10]
0x61E8CC: fcomp   qword ptr ds:0A2FC68h
0x61E8D2: fnstsw  ax
0x61E8D4: test    ah, 41h
0x61E8D7: jz      short loc_61E8DE
0x61E8D9: mov     [esp+20h+var_11], 0
0x61E8DE: mov     byte ptr [esi+0C4h], 0
0x61E8E5: xor     edi, edi
0x61E8E7: lea     ebp, [esi+0B0h]
0x61E8ED: lea     ecx, [ecx+0]
0x61E8F0: mov     edx, ds:0B3F9A8h
0x61E8F6: fldz
0x61E8F8: mov     ecx, ds:0B3F9B0h
0x61E8FE: fstp    [esp+20h+var_10]
0x61E902: mov     eax, ds:0B3F9ACh
0x61E907: mov     dword ptr [esp+20h+var_C], edx
0x61E90B: lea     edx, [esp+20h+var_C]
0x61E90F: mov     [esp+20h+var_4], ecx
0x61E913: push    edx
0x61E914: lea     ecx, [edi+16h]
0x61E917: mov     dword ptr [esp+24h+var_C+4], eax
0x61E91B: mov     eax, [esi+3Ch]
0x61E91E: push    ecx
0x61E91F: push    eax
0x61E920: call    sub_615F70
0x61E925: add     esp, 0Ch
0x61E928: test    al, al
0x61E92A: jz      short loc_61E934
0x61E92C: fld     dword ptr [esp+20h+var_C+4]
0x61E930: fstp    [esp+20h+var_10]
0x61E934: cmp     [esp+20h+var_11], 0
0x61E939: jz      short loc_61E965
0x61E93B: fldz
0x61E93D: fcomp   [esp+20h+var_10]
0x61E941: fnstsw  ax
0x61E943: test    ah, 5
0x61E946: jp      short loc_61E965
0x61E948: mov     ecx, [esi+3Ch]
0x61E94B: mov     edx, [ecx]
0x61E94D: mov     eax, [edx+0ECh]
0x61E953: call    eax
0x61E955: fmul    [esp+20h+var_10]
0x61E959: fstp    dword ptr [ebp+0]
0x61E95C: mov     byte ptr [esi+0C4h], 1
0x61E963: jmp     short loc_61E96A
0x61E965: fldz
0x61E967: fstp    dword ptr [ebp+0]
0x61E96A: add     edi, 1
0x61E96D: add     ebp, 4
0x61E970: cmp     edi, 5
0x61E973: jl      loc_61E8F0
0x61E979: pop     edi
0x61E97A: pop     esi
0x61E97B: pop     ebp
0x61E97C: add     esp, 14h
0x61E97F: retn
