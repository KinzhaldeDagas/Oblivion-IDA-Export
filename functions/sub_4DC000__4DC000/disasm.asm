0x4DC000: push    esi
0x4DC001: mov     esi, [esp+4+arg_4]
0x4DC005: test    esi, esi
0x4DC007: jz      short loc_4DC060
0x4DC009: push    edi
0x4DC00A: mov     edi, [esp+8+arg_0]
0x4DC00E: test    edi, edi
0x4DC010: jz      short loc_4DC05F
0x4DC012: cmp     edi, ds:0B333C4h
0x4DC018: jz      short loc_4DC05F
0x4DC01A: mov     ecx, esi; this
0x4DC01C: call    TESObjectREFR_IsPersistent?
0x4DC021: test    al, al
0x4DC023: jnz     short loc_4DC05F
0x4DC025: mov     eax, [esi]
0x4DC027: mov     edx, [eax+78h]
0x4DC02A: mov     ecx, esi
0x4DC02C: call    edx
0x4DC02E: test    al, al
0x4DC030: jnz     short loc_4DC05F
0x4DC032: push    esi
0x4DC033: lea     ecx, [edi+44h]
0x4DC036: call    sub_424B60
0x4DC03B: push    edi
0x4DC03C: lea     ecx, [esi+44h]
0x4DC03F: call    sub_4203E0
0x4DC044: mov     eax, [esi]
0x4DC046: mov     edx, [eax+78h]
0x4DC049: mov     ecx, esi
0x4DC04B: call    edx
0x4DC04D: test    al, al
0x4DC04F: jnz     short loc_4DC05F
0x4DC051: mov     eax, [esi]
0x4DC053: mov     edx, [eax+40h]
0x4DC056: push    20000h
0x4DC05B: mov     ecx, esi
0x4DC05D: call    edx
0x4DC05F: pop     edi
0x4DC060: pop     esi
0x4DC061: retn
