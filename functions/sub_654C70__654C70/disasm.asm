0x654C70: push    ebx
0x654C71: mov     ebx, ecx
0x654C73: cmp     byte ptr [ebx+11Ch], 0
0x654C7A: jz      short loc_654CF0
0x654C7C: push    esi
0x654C7D: mov     esi, [esp+8+arg_0]
0x654C81: mov     ecx, esi
0x654C83: call    sub_5E0A60
0x654C88: fcomp   dword ptr ds:0A2FAA8h
0x654C8E: fnstsw  ax
0x654C90: test    ah, 5
0x654C93: jnp     short loc_654CEF
0x654C95: mov     eax, [esi]
0x654C97: mov     edx, [eax+1A0h]
0x654C9D: mov     ecx, esi
0x654C9F: call    edx
0x654CA1: test    al, al
0x654CA3: jnz     short loc_654CEF
0x654CA5: push    edi
0x654CA6: mov     edi, [esi+3Ch]
0x654CA9: push    0
0x654CAB: push    edi
0x654CAC: call    sub_8A5580
0x654CB1: fld1
0x654CB3: add     esp, 4
0x654CB6: fstp    [esp+10h+var_10]; float
0x654CB9: push    edi; int
0x654CBA: call    sub_8AB8A0
0x654CBF: add     esp, 8
0x654CC2: push    0
0x654CC4: lea     ecx, [esi+44h]
0x654CC7: call    sub_424870
0x654CCC: mov     ecx, esi
0x654CCE: call    sub_5E12B0
0x654CD3: test    eax, eax
0x654CD5: pop     edi
0x654CD6: jz      short loc_654CE8
0x654CD8: mov     edx, [eax]
0x654CDA: push    0
0x654CDC: mov     ecx, eax
0x654CDE: mov     eax, [edx+9Ch]
0x654CE4: push    0
0x654CE6: call    eax
0x654CE8: mov     byte ptr [ebx+11Ch], 0
0x654CEF: pop     esi
0x654CF0: pop     ebx
0x654CF1: retn    4
