0x94ED70: push    ebp
0x94ED71: mov     ebp, esp
0x94ED73: and     esp, 0FFFFFFF0h
0x94ED76: sub     esp, 0A4h
0x94ED7C: mov     eax, [ebp+arg_0]
0x94ED7F: push    ebx
0x94ED80: mov     ebx, [eax+0Ch]
0x94ED83: push    esi
0x94ED84: push    edi
0x94ED85: mov     edi, [ebp+arg_4]
0x94ED88: mov     esi, ecx
0x94ED8A: push    edi
0x94ED8B: lea     ecx, [esi+0C0h]
0x94ED91: call    sub_958600
0x94ED96: mov     eax, [ebp+arg_0]
0x94ED99: lea     ecx, [esp+0B0h+var_40]
0x94ED9D: push    ecx
0x94ED9E: lea     edx, [esp+0B4h+var_80]
0x94EDA2: push    edx
0x94EDA3: push    eax
0x94EDA4: mov     ecx, esi
0x94EDA6: call    sub_94D100
0x94EDAB: lea     edx, [ebx+20h]
0x94EDAE: push    edx
0x94EDAF: lea     eax, [esp+0B4h+var_80]
0x94EDB3: lea     ecx, [esi+50h]
0x94EDB6: push    eax
0x94EDB7: mov     [esp+0B8h+var_98], ecx
0x94EDBB: call    sub_88FCC0
0x94EDC0: lea     edx, [ebx+10h]
0x94EDC3: push    edx
0x94EDC4: lea     eax, [esp+0B4h+var_40]
0x94EDC8: lea     ecx, [esi+40h]
0x94EDCB: push    eax
0x94EDCC: mov     [esp+0B8h+var_94], ecx
0x94EDD0: call    sub_88FCC0
0x94EDD5: mov     ecx, [ebp+arg_8]
0x94EDD8: push    ecx
0x94EDD9: mov     ecx, esi
0x94EDDB: call    sub_94CF30
0x94EDE0: mov     edx, [ebp+arg_8]
0x94EDE3: push    edx
0x94EDE4: mov     ecx, esi
0x94EDE6: call    sub_94CF80
0x94EDEB: mov     esi, [esp+0B0h+var_98]
0x94EDEF: mov     eax, [esp+0B0h+var_94]
0x94EDF3: movaps  xmm3, xmmword ptr [eax]
0x94EDF6: movaps  xmm1, xmmword ptr [esi]
0x94EDF9: mov     ecx, [ebx+0Ch]
0x94EDFC: mov     edx, [ebp+arg_8]
0x94EDFF: mov     ebx, [edi]
0x94EE01: subps   xmm1, xmm3
0x94EE04: movaps  xmm0, xmm1
0x94EE07: mulps   xmm0, xmm1
0x94EE0A: movaps  xmm2, xmm0
0x94EE0D: shufps  xmm2, xmm0, 55h ; 'U'
0x94EE11: addss   xmm2, xmm0
0x94EE15: movaps  xmm4, xmm0
0x94EE18: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x94EE1C: movaps  xmm0, xmm4
0x94EE1F: addss   xmm0, xmm2
0x94EE23: movaps  [esp+0B0h+var_90], xmm0
0x94EE28: rsqrtss xmm2, xmm0
0x94EE2C: movss   dword ptr [esp+0B0h+var_90], xmm2
0x94EE32: movaps  xmm2, [esp+0B0h+var_90]
0x94EE37: mulss   xmm0, xmm2
0x94EE3B: mulss   xmm0, xmm2
0x94EE3F: mov     [esp+0B0h+var_98], 40400000h
0x94EE47: movss   xmm4, [esp+0B0h+var_98]
0x94EE4D: subss   xmm4, xmm0
0x94EE51: mov     [esp+0B0h+var_98], 3F000000h
0x94EE59: movss   xmm0, [esp+0B0h+var_98]
0x94EE5F: mulss   xmm0, xmm2
0x94EE63: mulss   xmm0, xmm4
0x94EE67: movaps  xmm4, xmm0
0x94EE6A: shufps  xmm4, xmm0, 0
0x94EE6E: mov     [esp+0B0h+var_98], ecx
0x94EE72: movss   xmm2, [esp+0B0h+var_98]
0x94EE78: movaps  xmm0, xmm2
0x94EE7B: shufps  xmm0, xmm2, 0
0x94EE7F: mulps   xmm4, xmm1
0x94EE82: mulps   xmm0, xmm4
0x94EE85: addps   xmm0, xmm3
0x94EE88: movaps  [esp+0B0h+var_90], xmm0
0x94EE8D: push    edx
0x94EE8E: push    3F800000h; float
0x94EE93: push    3F800000h; float
0x94EE98: push    3F000000h; float
0x94EE9D: push    0; float
0x94EE9F: call    sub_8AEBB0
0x94EEA4: mov     ecx, [esp+0C4h+var_94]
0x94EEA8: add     esp, 10h
0x94EEAB: push    eax
0x94EEAC: lea     eax, [esp+0B8h+var_90]
0x94EEB0: push    eax
0x94EEB1: push    ecx
0x94EEB2: mov     ecx, edi
0x94EEB4: call    dword ptr [ebx+1Ch]
0x94EEB7: mov     eax, [ebp+arg_8]
0x94EEBA: mov     edx, [edi]
0x94EEBC: push    eax
0x94EEBD: push    0FFFF0000h
0x94EEC2: push    esi
0x94EEC3: lea     ecx, [esp+0BCh+var_90]
0x94EEC7: push    ecx
0x94EEC8: mov     ecx, edi
0x94EECA: call    dword ptr [edx+1Ch]
0x94EECD: pop     edi
0x94EECE: pop     esi
0x94EECF: pop     ebx
0x94EED0: mov     esp, ebp
0x94EED2: pop     ebp
0x94EED3: retn    0Ch
