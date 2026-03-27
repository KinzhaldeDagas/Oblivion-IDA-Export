0x70D590: push    0FFFFFFFFh
0x70D592: push    offset SEH_70D590
0x70D597: mov     eax, large fs:0
0x70D59D: push    eax
0x70D59E: push    ecx
0x70D59F: push    esi
0x70D5A0: push    edi
0x70D5A1: mov     eax, ds:0B30AACh
0x70D5A6: xor     eax, esp
0x70D5A8: push    eax
0x70D5A9: lea     eax, [esp+1Ch+var_C]
0x70D5AD: mov     large fs:0, eax
0x70D5B3: mov     esi, ecx
0x70D5B5: mov     [esp+1Ch+var_10], esi
0x70D5B9: call    ??0NiAVObject@@QAE@XZ; NiAVObject::NiAVObject(void)
0x70D5BE: lea     edi, [esi+0ECh]
0x70D5C4: push    0
0x70D5C6: mov     ecx, edi
0x70D5C8: mov     [esp+20h+var_4], 0
0x70D5D0: mov     dword ptr [esi], offset ??_7NiCamera@@6B@; const NiCamera::`vftable'
0x70D5D6: call    NiFrustum__SetOrtho
0x70D5DB: fldz
0x70D5DD: fst     dword ptr [esi+110h]
0x70D5E3: mov     ecx, esi
0x70D5E5: fst     dword ptr [esi+114h]
0x70D5EB: fst     dword ptr [esi+118h]
0x70D5F1: fst     dword ptr [esi+11Ch]
0x70D5F7: fld1
0x70D5F9: mov     byte ptr [esi+104h], 0
0x70D600: fst     dword ptr [esi+0FCh]
0x70D606: fld     dword ptr ds:0A379B4h
0x70D60C: fstp    dword ptr [esi+100h]
0x70D612: fld     dword ptr ds:0A3D65Ch
0x70D618: fst     dword ptr [esi+0F4h]
0x70D61E: fld     dword ptr ds:0A45E4Ch
0x70D624: fst     dword ptr [esi+0F8h]
0x70D62A: fstp    dword ptr [edi]
0x70D62C: fstp    dword ptr [esi+0F0h]
0x70D632: fld     dword ptr ds:0A2FAACh
0x70D638: fstp    dword ptr [esi+108h]
0x70D63E: fld     dword ptr ds:0A5A04Ch
0x70D644: fstp    dword ptr [esi+10Ch]
0x70D64A: fst     dword ptr [esi+118h]
0x70D650: fst     dword ptr [esi+114h]
0x70D656: fstp    dword ptr [esi+120h]
0x70D65C: fst     dword ptr [esi+11Ch]
0x70D662: fstp    dword ptr [esi+110h]
0x70D668: call    sub_70C120
0x70D66D: mov     ecx, esi
0x70D66F: call    sub_70CC90
0x70D674: mov     eax, [esi+88h]
0x70D67A: mov     ecx, [esi+8Ch]
0x70D680: mov     edx, [esi+90h]
0x70D686: mov     [esi+20h], eax
0x70D689: mov     [esi+24h], ecx
0x70D68C: mov     [esi+28h], edx
0x70D68F: mov     eax, esi
0x70D691: mov     ecx, [esp+1Ch+var_C]
0x70D695: mov     large fs:0, ecx
0x70D69C: pop     ecx
0x70D69D: pop     edi
0x70D69E: pop     esi
0x70D69F: add     esp, 10h
0x70D6A2: retn
