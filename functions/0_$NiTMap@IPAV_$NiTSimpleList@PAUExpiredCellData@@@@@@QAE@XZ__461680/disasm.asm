0x461680: push    0FFFFFFFFh
0x461682: push    offset ??0?$NiTMap@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@QAE@XZ_SEH
0x461687: mov     eax, large fs:0
0x46168D: push    eax
0x46168E: sub     esp, 0B4h
0x461694: push    ebx
0x461695: push    ebp
0x461696: push    esi
0x461697: push    edi
0x461698: mov     eax, ds:0B30AACh
0x46169D: xor     eax, esp
0x46169F: push    eax
0x4616A0: lea     eax, [esp+0D4h+var_C]
0x4616A7: mov     large fs:0, eax
0x4616AD: mov     esi, ecx
0x4616AF: mov     [esp+0D4h+var_BC], esi
0x4616B3: mov     ecx, large fs:2Ch
0x4616BA: mov     eax, ds:0BA9DE4h
0x4616BF: mov     eax, [ecx+eax*4]
0x4616C2: mov     dl, [eax+185h]
0x4616C8: mov     [esp+0D4h+var_80], eax
0x4616CC: mov     byte ptr [eax+185h], 0
0x4616D3: mov     [esp+0D4h+var_A9], dl
0x4616D7: xor     ecx, ecx
0x4616D9: mov     eax, 25h ; '%'
0x4616DE: xor     ebp, ebp
0x4616E0: mov     [esp+0D4h+var_94], eax
0x4616E4: mov     edx, 4
0x4616E9: mul     edx
0x4616EB: seto    cl
0x4616EE: mov     [esp+0D4h+var_98], offset ??_7?$NiTMapBase@V?$DFALL@PAV?$NiTSimpleList@PAUExpiredCellData@@@@@@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@6B@; const NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,uint,NiTSimpleList<ExpiredCellData *> *>::`vftable'
0x4616F6: mov     [esp+0D4h+var_8C], ebp
0x4616FA: neg     ecx
0x4616FC: or      ecx, eax
0x4616FE: push    ecx; Size
0x4616FF: call    FormHeapAlloc
0x461704: mov     ecx, [esp+0D8h+var_94]
0x461708: lea     edx, ds:0[ecx*4]
0x46170F: push    edx
0x461710: push    ebp
0x461711: push    eax
0x461712: mov     [esp+0E4h+var_90], eax
0x461716: call    __memset
0x46171B: add     esp, 10h
0x46171E: mov     [esp+0D4h+var_98], offset ??_7?$NiTMap@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@6B@; const NiTMap<uint,NiTSimpleList<ExpiredCellData *> *>::`vftable'
0x461726: mov     ecx, offset TimeGlobals
0x46172B: mov     [esp+0D4h+var_4], ebp
0x461732: call    TimeGlobals_GetGameDaysPassed
0x461737: lea     edi, [eax+eax*2]
0x46173A: add     edi, edi
0x46173C: add     edi, edi
0x46173E: mov     ecx, offset TimeGlobals
0x461743: add     edi, edi
0x461745: call    TimeGlobals_GetGameHour
0x46174A: fnstcw  word ptr [esp+0D4h+var_B8]
0x46174E: movzx   eax, word ptr [esp+0D4h+var_B8]
0x461753: mov     edx, [esi]
0x461755: or      eax, 0C00h
0x46175A: mov     [esp+0D4h+var_A0], eax
0x46175E: xor     ecx, ecx
0x461760: fldcw   word ptr [esp+0D4h+var_A0]
0x461764: fistp   qword ptr [esp+0D4h+var_88]
0x461768: mov     eax, [esp+0D4h+var_88]
0x46176C: add     edi, eax
0x46176E: mov     eax, [edx+4]
0x461771: cmp     eax, ebp
0x461773: fldcw   word ptr [esp+0D4h+var_B8]
0x461777: mov     [esp+0D4h+var_A0], edi
0x46177B: jbe     short loc_461794
0x46177D: mov     edx, [edx+8]
0x461780: mov     edi, edx
0x461782: cmp     [edi], ebp
0x461784: jnz     loc_461868
0x46178A: add     ecx, 1
0x46178D: add     edi, 4
0x461790: cmp     ecx, eax
0x461792: jb      short loc_461782
0x461794: xor     ecx, ecx
0x461796: cmp     ecx, ebp
0x461798: mov     [esp+0D4h+var_9C], ecx
0x46179C: jz      loc_461A18
0x4617A2: xor     eax, eax
0x4617A4: lea     ecx, [esp+0D4h+var_C0]
0x4617A8: push    ecx
0x4617A9: mov     ecx, [esi]
0x4617AB: lea     edx, [esp+0D8h+a1]
0x4617AF: mov     [esp+0D8h+var_C0], eax
0x4617B3: mov     [esp+0D8h+a1], eax
0x4617B7: push    edx
0x4617B8: lea     eax, [esp+0DCh+var_9C]
0x4617BC: push    eax
0x4617BD: call    sub_452600
0x4617C2: mov     eax, [esp+0D4h+var_C0]
0x4617C6: mov     ecx, [eax]
0x4617C8: test    ecx, 8000000h
0x4617CE: mov     ebp, 7FFFFFFFh
0x4617D3: mov     ebx, ebp
0x4617D5: jz      loc_461A0D
0x4617DB: mov     eax, [eax+4]
0x4617DE: test    eax, eax
0x4617E0: mov     [esp+0D4h+var_C0], 0
0x4617E8: jz      loc_4618E7
0x4617EE: mov     [esi+14h], eax
0x4617F1: mov     edi, ds:0B33B00h
0x4617F7: mov     eax, [edi+14h]
0x4617FA: mov     edx, [eax]
0x4617FC: add     eax, 4
0x4617FF: mov     [esp+0D4h+var_B0], edx
0x461803: cmp     byte ptr [esp+0D4h+var_B0+2], 30h ; '0'
0x461808: mov     [edi+14h], eax
0x46180B: jnz     loc_4618DA
0x461811: cmp     byte ptr [esp+0D4h+var_B0+3], 5Bh ; '['
0x461816: jb      loc_4618DA
0x46181C: test    ecx, 4000000h
0x461822: jz      short loc_461870
0x461824: mov     ecx, ds:0B33B00h
0x46182A: mov     eax, [ecx+14h]
0x46182D: mov     edx, [eax]
0x46182F: add     eax, 4
0x461832: mov     [ecx+14h], eax
0x461835: push    edx
0x461836: mov     ecx, esi
0x461838: mov     [esp+0D8h+var_C0], edx
0x46183C: call    sub_459990
0x461841: movsx   ebp, byte ptr [esp+0D4h+var_C0+2]
0x461846: movsx   ebx, byte ptr [esp+0D4h+var_C0+3]
0x46184B: mov     edi, eax
0x46184D: mov     eax, [esi+14h]
0x461850: mov     ecx, [eax]
0x461852: add     eax, 4
0x461855: mov     [esi+14h], eax
0x461858: mov     [esp+0D4h+var_C0], ecx
0x46185C: mov     dword ptr [esi+14h], 0
0x461863: jmp     loc_46193E
0x461868: mov     ecx, [edx+ecx*4]
0x46186B: jmp     loc_461796
0x461870: test    ecx, 2000000h
0x461876: jz      short loc_4618BE
0x461878: mov     ecx, ds:0B33B00h
0x46187E: mov     eax, [ecx+14h]
0x461881: mov     edx, [eax]
0x461883: mov     bx, [eax+4]
0x461887: add     eax, 6
0x46188A: mov     [ecx+14h], eax
0x46188D: push    edx
0x46188E: mov     ecx, esi
0x461890: mov     [esp+0D8h+var_88], edx
0x461894: call    sub_459990
0x461899: movsx   ebp, word ptr [esp+0D4h+var_88+2]
0x46189E: mov     edi, eax
0x4618A0: mov     eax, [esi+14h]
0x4618A3: mov     ecx, [eax]
0x4618A5: add     eax, 4
0x4618A8: mov     [esi+14h], eax
0x4618AB: movsx   ebx, bx
0x4618AE: mov     [esp+0D4h+var_C0], ecx
0x4618B2: mov     dword ptr [esi+14h], 0
0x4618B9: jmp     loc_46193E
0x4618BE: mov     eax, [esi+14h]
0x4618C1: mov     ecx, [eax]
0x4618C3: mov     edi, [esp+0D4h+a1]
0x4618C7: add     eax, 4
0x4618CA: mov     [esi+14h], eax
0x4618CD: mov     [esp+0D4h+var_C0], ecx
0x4618D1: mov     dword ptr [esi+14h], 0
0x4618D8: jmp     short loc_46193E
0x4618DA: mov     edi, [esp+0D4h+a1]
0x4618DE: mov     dword ptr [esi+14h], 0
0x4618E5: jmp     short loc_46193E
0x4618E7: mov     edi, [esp+0D4h+a1]
0x4618EB: push    edi; a1
0x4618EC: call    TESForm_LookupByFormID
0x4618F1: mov     esi, eax
0x4618F3: add     esp, 4
0x4618F6: test    esi, esi
0x4618F8: jz      loc_461A09
0x4618FE: cmp     byte ptr [esi+4], 30h ; '0'
0x461902: jnz     loc_461A09
0x461908: mov     ecx, esi
0x46190A: call    TESObjectCELL_GetExtraDetachTime
0x46190F: mov     ecx, esi; this
0x461911: mov     [esp+0D4h+var_C0], eax
0x461915: call    TESObjectCELL_IsInterior
0x46191A: test    al, al
0x46191C: jnz     short loc_46193A
0x46191E: mov     ecx, esi; this
0x461920: call    TESObjectCELL_GetWorldSpace
0x461925: mov     edi, [eax+0Ch]
0x461928: mov     ecx, esi; this
0x46192A: call    TESObjectCELL_GetXCoordinate
0x46192F: mov     ecx, esi; this
0x461931: mov     ebp, eax
0x461933: call    TESObjectCELL_GetYCoordinate
0x461938: mov     ebx, eax
0x46193A: mov     esi, [esp+0D4h+var_BC]
0x46193E: mov     eax, [esp+0D4h+var_C0]
0x461942: test    eax, eax
0x461944: jz      loc_461A0D
0x46194A: mov     edx, [esp+0D4h+var_A0]
0x46194E: sub     edx, eax
0x461950: cmp     edx, ds:0B35C1Ch
0x461956: jbe     loc_461A0D
0x46195C: cmp     ebp, 7FFFFFFFh
0x461962: jz      loc_4619FB
0x461968: push    8; Size
0x46196A: call    FormHeapAlloc
0x46196F: add     esp, 4
0x461972: mov     [esp+0D4h+var_A8], eax
0x461976: mov     [eax], ebp
0x461978: mov     [eax+4], ebx
0x46197B: lea     eax, [esp+0D4h+var_C0]
0x46197F: push    eax
0x461980: push    edi
0x461981: lea     ecx, [esp+0DCh+var_98]
0x461985: mov     [esp+0DCh+var_C0], 0
0x46198D: call    NiTMap_GetAt
0x461992: test    al, al
0x461994: jnz     short loc_4619E9
0x461996: push    8; Size
0x461998: call    FormHeapAlloc
0x46199D: add     esp, 4
0x4619A0: test    eax, eax
0x4619A2: jz      short loc_4619CC
0x4619A4: push    eax; a3
0x4619A5: push    edi; a2
0x4619A6: lea     ecx, [esp+0DCh+var_98]; this
0x4619AA: mov     dword ptr [eax], 0
0x4619B0: mov     dword ptr [eax+4], 0
0x4619B7: mov     ebx, eax
0x4619B9: call    NiTMap_SetAt
0x4619BE: mov     ecx, [esp+0D4h+var_A8]
0x4619C2: push    ecx
0x4619C3: mov     ecx, ebx
0x4619C5: call    BSSimpleList_PushFront
0x4619CA: jmp     short loc_461A0D
0x4619CC: xor     eax, eax
0x4619CE: push    eax; a3
0x4619CF: push    edi; a2
0x4619D0: lea     ecx, [esp+0DCh+var_98]; this
0x4619D4: mov     ebx, eax
0x4619D6: call    NiTMap_SetAt
0x4619DB: mov     ecx, [esp+0D4h+var_A8]
0x4619DF: push    ecx
0x4619E0: mov     ecx, ebx
0x4619E2: call    BSSimpleList_PushFront
0x4619E7: jmp     short loc_461A0D
0x4619E9: mov     ecx, [esp+0D4h+var_A8]
0x4619ED: mov     ebx, [esp+0D4h+var_C0]
0x4619F1: push    ecx
0x4619F2: mov     ecx, ebx
0x4619F4: call    BSSimpleList_PushFront
0x4619F9: jmp     short loc_461A0D
0x4619FB: push    0; a3
0x4619FD: push    edi; a2
0x4619FE: lea     ecx, [esp+0DCh+var_98]; this
0x461A02: call    NiTMap_SetAt
0x461A07: jmp     short loc_461A0D
0x461A09: mov     esi, [esp+0D4h+var_BC]
0x461A0D: cmp     [esp+0D4h+var_9C], 0
0x461A12: jnz     loc_4617A2
0x461A18: mov     esi, [esi]
0x461A1A: mov     edx, [esi+4]
0x461A1D: xor     eax, eax
0x461A1F: test    edx, edx
0x461A21: jbe     short loc_461A43
0x461A23: mov     esi, [esi+8]
0x461A26: mov     ecx, esi
0x461A28: jmp     short loc_461A30
0x461A2A: align 10h
0x461A30: cmp     dword ptr [ecx], 0
0x461A33: jnz     loc_461B13
0x461A39: add     eax, 1
0x461A3C: add     ecx, 4
0x461A3F: cmp     eax, edx
0x461A41: jb      short loc_461A30
0x461A43: xor     eax, eax
0x461A45: test    eax, eax
0x461A47: mov     [esp+0D4h+var_9C], eax
0x461A4B: jz      loc_461E97
0x461A51: mov     ebx, [esp+0D4h+var_BC]
0x461A55: lea     edx, [esp+0D4h+var_C0]
0x461A59: push    edx
0x461A5A: lea     eax, [esp+0D8h+a1]
0x461A5E: push    eax
0x461A5F: lea     ecx, [esp+0DCh+var_9C]
0x461A63: xor     ebp, ebp
0x461A65: push    ecx
0x461A66: mov     ecx, [ebx]
0x461A68: mov     [esp+0E0h+var_C0], ebp
0x461A6C: mov     [esp+0E0h+a1], ebp
0x461A70: call    sub_452600
0x461A75: mov     eax, [esp+0D4h+var_C0]
0x461A79: mov     edx, [eax]
0x461A7B: mov     eax, [eax+4]
0x461A7E: xor     ecx, ecx
0x461A80: cmp     eax, ecx
0x461A82: mov     esi, 7FFFFFFFh
0x461A87: mov     [esp+0D4h+var_B0], edx
0x461A8B: mov     edi, esi
0x461A8D: mov     [esp+0D4h+var_B8], ecx
0x461A91: mov     word ptr [esp+0D4h+Src], cx
0x461A96: jz      loc_461BCC
0x461A9C: mov     [ebx+14h], eax
0x461A9F: mov     ecx, ds:0B33B00h
0x461AA5: mov     eax, [ecx+14h]
0x461AA8: mov     edx, [eax]
0x461AAA: add     eax, 4
0x461AAD: mov     [esp+0D4h+Src], edx
0x461AB1: mov     [ecx+14h], eax
0x461AB4: movzx   eax, byte ptr [esp+0D4h+Src+2]
0x461AB9: cmp     eax, 31h ; '1'
0x461ABC: mov     [esp+0D4h+var_A0], eax
0x461AC0: jz      short loc_461AD0
0x461AC2: cmp     eax, 32h ; '2'
0x461AC5: jz      short loc_461AD0
0x461AC7: cmp     eax, 33h ; '3'
0x461ACA: jnz     loc_461BC3
0x461AD0: mov     eax, [esp+0D4h+var_B0]
0x461AD4: test    al, 2
0x461AD6: jz      short loc_461B1B
0x461AD8: mov     edi, ds:0B33B00h
0x461ADE: mov     esi, [edi+14h]
0x461AE1: push    24h ; '$'; Size
0x461AE3: lea     eax, [esp+0D8h+Dst]
0x461AE7: push    esi; Src
0x461AE8: push    eax; Dst
0x461AE9: call    _memcpy
0x461AEE: fld     [esp+0E0h+var_50]
0x461AF5: mov     ebp, [esp+0E0h+var_54]
0x461AFC: add     esi, 24h ; '$'
0x461AFF: add     esp, 0Ch
0x461B02: mov     [edi+14h], esi
0x461B05: call    Double_To_SInt32
0x461B0A: fld     [esp+0D4h+var_4C]
0x461B11: jmp     short loc_461B8C
0x461B13: mov     eax, [esi+eax*4]
0x461B16: jmp     loc_461A45
0x461B1B: test    al, 0Ch
0x461B1D: jz      loc_461B9B
0x461B23: test    eax, eax
0x461B25: mov     edi, ds:0B33B00h
0x461B2B: mov     esi, [edi+14h]
0x461B2E: jns     short loc_461B65
0x461B30: push    2Ch ; ','; Size
0x461B32: lea     ecx, [esp+0D8h+var_38]
0x461B39: push    esi; Src
0x461B3A: push    ecx; Dst
0x461B3B: call    _memcpy
0x461B40: fld     [esp+0E0h+var_24]
0x461B47: mov     ebp, [esp+0E0h+var_28]
0x461B4E: add     esi, 2Ch ; ','
0x461B51: add     esp, 0Ch
0x461B54: mov     [edi+14h], esi
0x461B57: call    Double_To_SInt32
0x461B5C: fld     [esp+0D4h+var_20]
0x461B63: jmp     short loc_461B8C
0x461B65: push    1Ch; Size
0x461B67: lea     edx, [esp+0D8h+var_78]
0x461B6B: push    esi; Src
0x461B6C: push    edx; Dst
0x461B6D: call    _memcpy
0x461B72: fld     [esp+0E0h+var_74]
0x461B76: mov     ebp, [esp+0E0h+var_78]
0x461B7A: add     esi, 1Ch
0x461B7D: add     esp, 0Ch
0x461B80: mov     [edi+14h], esi
0x461B83: call    Double_To_SInt32
0x461B88: fld     [esp+0D4h+var_70]
0x461B8C: mov     esi, eax
0x461B8E: sar     esi, 0Ch
0x461B91: call    Double_To_SInt32
0x461B96: mov     edi, eax
0x461B98: sar     edi, 0Ch
0x461B9B: mov     ecx, ds:0B33A98h
0x461BA1: push    ebp; _DWORD
0x461BA2: call    TESDataHandler_IsFormIDCreated?
0x461BA7: test    al, al
0x461BA9: jnz     short loc_461BC3
0x461BAB: mov     eax, [ebx+74h]
0x461BAE: cmp     ebp, [eax+0Ch]
0x461BB1: jbe     short loc_461BBD
0x461BB3: xor     ebp, ebp
0x461BB5: mov     [ebx+14h], ebp
0x461BB8: jmp     loc_461C41
0x461BBD: mov     eax, [eax+4]
0x461BC0: mov     ebp, [eax+ebp*4]
0x461BC3: mov     dword ptr [ebx+14h], 0
0x461BCA: jmp     short loc_461C41
0x461BCC: mov     ecx, [esp+0D4h+a1]
0x461BD0: push    ecx; a1
0x461BD1: call    TESForm_LookupByFormID
0x461BD6: add     esp, 4
0x461BD9: test    eax, eax
0x461BDB: jz      loc_461E8C
0x461BE1: movzx   ecx, byte ptr [eax+4]
0x461BE5: cmp     ecx, 31h ; '1'
0x461BE8: mov     [esp+0D4h+var_A0], ecx
0x461BEC: jz      short loc_461BFC
0x461BEE: cmp     ecx, 32h ; '2'
0x461BF1: jz      short loc_461BFC
0x461BF3: cmp     ecx, 33h ; '3'
0x461BF6: jnz     loc_461E8C
0x461BFC: mov     ecx, eax; this
0x461BFE: mov     [esp+0D4h+var_B8], eax
0x461C02: call    TESObjectREFR_GetParentCell
0x461C07: mov     edi, eax
0x461C09: test    edi, edi
0x461C0B: jz      loc_461E8C
0x461C11: mov     ecx, edi; this
0x461C13: call    TESObjectCELL_IsInterior
0x461C18: test    al, al
0x461C1A: jz      short loc_461C25
0x461C1C: mov     ebp, [edi+0Ch]
0x461C1F: xor     esi, esi
0x461C21: xor     edi, edi
0x461C23: jmp     short loc_461C41
0x461C25: mov     ecx, edi; this
0x461C27: call    TESObjectCELL_GetWorldSpace
0x461C2C: mov     ebp, [eax+0Ch]
0x461C2F: mov     ecx, edi; this
0x461C31: call    TESObjectCELL_GetXCoordinate
0x461C36: mov     ecx, edi; this
0x461C38: mov     esi, eax
0x461C3A: call    TESObjectCELL_GetYCoordinate
0x461C3F: mov     edi, eax
0x461C41: test    ebp, ebp
0x461C43: jz      loc_461E8C
0x461C49: cmp     esi, 7FFFFFFFh
0x461C4F: jz      loc_461E8C
0x461C55: cmp     edi, 7FFFFFFFh
0x461C5B: jz      loc_461E8C
0x461C61: lea     edx, [esp+0D4h+var_A8]
0x461C65: push    edx
0x461C66: push    ebp
0x461C67: lea     ecx, [esp+0DCh+var_98]
0x461C6B: mov     [esp+0DCh+var_A8], 0
0x461C73: call    NiTMap_GetAt
0x461C78: test    al, al
0x461C7A: jz      loc_461E8C
0x461C80: mov     ecx, [esp+0D4h+var_A8]
0x461C84: test    ecx, ecx
0x461C86: jz      short loc_461CAF
0x461C88: jmp     short loc_461C90
0x461C8A: align 10h
0x461C90: mov     eax, [ecx]
0x461C92: test    eax, eax
0x461C94: jz      loc_461E8C
0x461C9A: cmp     [eax], esi
0x461C9C: jnz     short loc_461CA3
0x461C9E: cmp     [eax+4], edi
0x461CA1: jz      short loc_461CAF
0x461CA3: mov     ecx, [ecx+4]
0x461CA6: test    ecx, ecx
0x461CA8: jnz     short loc_461C90
0x461CAA: jmp     loc_461E8C
0x461CAF: mov     ebx, [esp+0D4h+var_B0]
0x461CB3: test    bl, 8
0x461CB6: jz      loc_461DEC
0x461CBC: test    bl, 6
0x461CBF: jnz     loc_461DEC
0x461CC5: cmp     ebx, 8
0x461CC8: jnz     short loc_461CE1
0x461CCA: mov     eax, [esp+0D4h+a1]
0x461CCE: mov     ecx, [esp+0D4h+var_BC]
0x461CD2: mov     ecx, [ecx]
0x461CD4: push    1
0x461CD6: push    eax
0x461CD7: call    sub_452DF0
0x461CDC: jmp     loc_461DD8
0x461CE1: mov     edx, [esp+0D4h+var_C0]
0x461CE5: mov     eax, [edx+4]
0x461CE8: test    eax, eax
0x461CEA: mov     [esp+0D4h+var_88], eax
0x461CEE: jz      loc_461DBC
0x461CF4: and     ebx, 0FFFFFFF7h
0x461CF7: or      ebx, 800h
0x461CFD: mov     esi, ebx
0x461CFF: test    esi, esi
0x461D01: mov     [esp+0D4h+var_B0], esi
0x461D05: jns     short loc_461D18
0x461D07: and     esi, 7FFFFFFFh
0x461D0D: mov     [esp+0D4h+var_B0], esi
0x461D11: mov     edi, 2Ch ; ','
0x461D16: jmp     short loc_461D1D
0x461D18: mov     edi, 1Ch
0x461D1D: mov     ax, word ptr [esp+0D4h+Src]
0x461D22: sub     ax, di
0x461D25: and     esi, offset loc_800000
0x461D2B: movzx   ecx, ax
0x461D2E: mov     word ptr [esp+0D4h+Src], ax
0x461D33: mov     [esp+0D4h+Size], ecx
0x461D37: jz      short loc_461D42
0x461D39: add     ax, 4
0x461D3D: mov     word ptr [esp+0D4h+Src], ax
0x461D42: mov     ecx, [esp+0D4h+var_BC]
0x461D46: movzx   edx, ax
0x461D49: add     edx, 4
0x461D4C: push    edx
0x461D4D: call    sub_453500
0x461D52: mov     ecx, ds:0B33B00h
0x461D58: mov     ebx, eax
0x461D5A: push    4; Size
0x461D5C: lea     eax, [esp+0D8h+Src]
0x461D60: push    eax; Src
0x461D61: call    SaveLoad_SaveData
0x461D66: test    esi, esi
0x461D68: jz      short loc_461D80
0x461D6A: push    4; Size
0x461D6C: lea     ecx, [esp+0D8h+var_A8]
0x461D70: push    ecx; Src
0x461D71: mov     ecx, ds:0B33B00h
0x461D77: mov     [esp+0DCh+var_A8], ebp
0x461D7B: call    SaveLoad_SaveData
0x461D80: mov     edx, [esp+0D4h+Size]
0x461D84: mov     esi, [esp+0D4h+var_88]
0x461D88: lea     eax, [edi+esi+4]
0x461D8C: mov     edi, [esp+0D4h+var_BC]
0x461D90: push    edx; Size
0x461D91: push    eax; Src
0x461D92: mov     ecx, edi
0x461D94: call    SaveLoad_SaveData
0x461D99: push    esi; void *
0x461D9A: mov     ecx, offset FormHeap
0x461D9F: call    MemoryHeap_Free_checked
0x461DA4: mov     eax, [esp+0D4h+var_C0]
0x461DA8: mov     ecx, [esp+0D4h+var_B0]
0x461DAC: mov     [eax+4], ebx
0x461DAF: mov     [eax], ecx
0x461DB1: mov     dword ptr [edi+14h], 0
0x461DB8: mov     ebx, ecx
0x461DBA: jmp     short loc_461DD8
0x461DBC: cmp     [esp+0D4h+var_B8], 0
0x461DC1: jz      short loc_461DEC
0x461DC3: mov     edx, [esp+0D4h+var_B8]
0x461DC7: mov     eax, [esp+0D4h+var_BC]
0x461DCB: mov     ecx, [eax]
0x461DCD: push    80000008h
0x461DD2: push    edx
0x461DD3: call    sub_452D60
0x461DD8: mov     eax, [esp+0D4h+var_B8]
0x461DDC: test    eax, eax
0x461DDE: jz      short loc_461DEC
0x461DE0: mov     ecx, [esp+0D4h+var_BC]
0x461DE4: push    0
0x461DE6: push    eax
0x461DE7: call    sub_45BB30
0x461DEC: mov     ebp, [esp+0D4h+var_A0]
0x461DF0: cmp     ebp, 32h ; '2'
0x461DF3: jz      short loc_461DFA
0x461DF5: cmp     ebp, 33h ; '3'
0x461DF8: jnz     short loc_461E5A
0x461DFA: mov     edi, [esp+0D4h+a1]
0x461DFE: mov     ecx, ds:0B33A98h
0x461E04: push    edi; _DWORD
0x461E05: call    TESDataHandler_IsFormIDCreated?
0x461E0A: test    al, al
0x461E0C: mov     esi, [esp+0D4h+var_B8]
0x461E10: jz      short loc_461E62
0x461E12: test    esi, esi
0x461E14: jz      short loc_461E39
0x461E16: mov     ecx, esi; this
0x461E18: call    TESObjectREFR_IsPersistent?
0x461E1D: test    al, al
0x461E1F: jnz     short loc_461E62
0x461E21: mov     edx, [esi]
0x461E23: mov     eax, [edx+78h]
0x461E26: mov     ecx, esi
0x461E28: call    eax
0x461E2A: test    al, al
0x461E2C: jnz     short loc_461E62
0x461E2E: mov     ecx, esi
0x461E30: call    sub_4D9040
0x461E35: test    al, al
0x461E37: jnz     short loc_461E62
0x461E39: mov     ecx, [esp+0D4h+var_BC]
0x461E3D: mov     ecx, [ecx]
0x461E3F: push    1
0x461E41: push    edi
0x461E42: call    sub_452DF0
0x461E47: test    esi, esi
0x461E49: jz      short loc_461E62
0x461E4B: mov     edx, [esi]
0x461E4D: mov     eax, [edx+10h]
0x461E50: push    1
0x461E52: mov     ecx, esi
0x461E54: call    eax
0x461E56: xor     esi, esi
0x461E58: jmp     short loc_461E62
0x461E5A: mov     esi, [esp+0D4h+var_B8]
0x461E5E: mov     edi, [esp+0D4h+a1]
0x461E62: cmp     ebp, 31h ; '1'
0x461E65: jnz     short loc_461E8C
0x461E67: test    ebx, 20000h
0x461E6D: jz      short loc_461E8C
0x461E6F: mov     ecx, [esp+0D4h+var_BC]
0x461E73: mov     ecx, [ecx]
0x461E75: push    1
0x461E77: push    edi
0x461E78: call    sub_452DF0
0x461E7D: test    esi, esi
0x461E7F: jz      short loc_461E8C
0x461E81: mov     edx, [esi]
0x461E83: mov     eax, [edx+10h]
0x461E86: push    1
0x461E88: mov     ecx, esi
0x461E8A: call    eax
0x461E8C: cmp     [esp+0D4h+var_9C], 0
0x461E91: jnz     loc_461A51
0x461E97: mov     edx, [esp+0D4h+var_94]
0x461E9B: xor     eax, eax
0x461E9D: test    edx, edx
0x461E9F: jbe     short loc_461EB2
0x461EA1: mov     ecx, [esp+0D4h+var_90]
0x461EA5: cmp     dword ptr [ecx+eax*4], 0
0x461EA9: jnz     short loc_461ECD
0x461EAB: add     eax, 1
0x461EAE: cmp     eax, edx
0x461EB0: jb      short loc_461EA5
0x461EB2: xor     eax, eax
0x461EB4: test    eax, eax
0x461EB6: mov     edi, eax
0x461EB8: jz      loc_461F4E
0x461EBE: mov     edi, edi
0x461EC0: mov     eax, [edi]
0x461EC2: test    eax, eax
0x461EC4: mov     esi, [edi+8]
0x461EC7: jz      short loc_461ED2
0x461EC9: mov     edi, eax
0x461ECB: jmp     short loc_461F02
0x461ECD: mov     eax, [ecx+eax*4]
0x461ED0: jmp     short loc_461EB4
0x461ED2: mov     ecx, [edi+4]
0x461ED5: mov     edx, [esp+0D4h+var_98]
0x461ED9: mov     eax, [edx+4]
0x461EDC: push    ecx
0x461EDD: lea     ecx, [esp+0D8h+var_98]
0x461EE1: call    eax
0x461EE3: mov     edx, [esp+0D4h+var_94]
0x461EE7: add     eax, 1
0x461EEA: cmp     eax, edx
0x461EEC: jnb     short loc_461F00
0x461EEE: mov     edi, [esp+0D4h+var_90]
0x461EF2: mov     ecx, [edi+eax*4]
0x461EF5: test    ecx, ecx
0x461EF7: jnz     short loc_461F31
0x461EF9: add     eax, 1
0x461EFC: cmp     eax, edx
0x461EFE: jb      short loc_461EF2
0x461F00: xor     edi, edi
0x461F02: test    esi, esi
0x461F04: jz      short loc_461F46
0x461F06: mov     eax, [esi]
0x461F08: test    eax, eax
0x461F0A: jz      short loc_461F3D
0x461F0C: push    eax
0x461F0D: call    FormHeapFree
0x461F12: mov     eax, [esi+4]
0x461F15: add     esp, 4
0x461F18: test    eax, eax
0x461F1A: jz      short loc_461F35
0x461F1C: mov     ecx, [eax+4]
0x461F1F: mov     [esi+4], ecx
0x461F22: mov     edx, [eax]
0x461F24: push    eax
0x461F25: mov     [esi], edx
0x461F27: call    FormHeapFree
0x461F2C: add     esp, 4
0x461F2F: jmp     short loc_461F06
0x461F31: mov     edi, ecx
0x461F33: jmp     short loc_461F02
0x461F35: mov     dword ptr [esi], 0
0x461F3B: jmp     short loc_461F06
0x461F3D: push    esi
0x461F3E: call    FormHeapFree
0x461F43: add     esp, 4
0x461F46: test    edi, edi
0x461F48: jnz     loc_461EC0
0x461F4E: lea     ecx, [esp+0D4h+var_98]
0x461F52: call    NiTMap_Clear
0x461F57: mov     eax, [esp+0D4h+var_80]
0x461F5B: mov     cl, [esp+0D4h+var_A9]
0x461F5F: mov     [eax+185h], cl
0x461F65: lea     ecx, [esp+0D4h+var_98]
0x461F69: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x461F74: call    ??1?$NiTMap@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@UAE@XZ; NiTMap<uint,NiTSimpleList<ExpiredCellData *> *>::~NiTMap<uint,NiTSimpleList<ExpiredCellData *> *>(void)
0x461F79: mov     ecx, [esp+0D4h+var_C]
0x461F80: mov     large fs:0, ecx
0x461F87: pop     ecx
0x461F88: pop     edi
0x461F89: pop     esi
0x461F8A: pop     ebp
0x461F8B: pop     ebx
0x461F8C: add     esp, 0C0h
0x461F92: retn
