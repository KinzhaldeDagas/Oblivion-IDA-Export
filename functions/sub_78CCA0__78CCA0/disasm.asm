0x78CCA0: push    ebp
0x78CCA1: lea     ebp, [esp-3Ch]
0x78CCA5: sub     esp, 3Ch
0x78CCA8: push    0FFFFFFFFh
0x78CCAA: push    offset SEH_78CCA0
0x78CCAF: mov     eax, large fs:0
0x78CCB5: push    eax
0x78CCB6: sub     esp, 60h
0x78CCB9: push    ebx
0x78CCBA: push    esi
0x78CCBB: push    edi
0x78CCBC: mov     eax, ds:0B30AACh
0x78CCC1: xor     eax, ebp
0x78CCC3: push    eax
0x78CCC4: lea     eax, [ebp+3Ch+var_48]
0x78CCC7: mov     large fs:0, eax
0x78CCCD: mov     [ebp+3Ch+var_4C], esp
0x78CCD0: mov     ebx, ecx
0x78CCD2: mov     [ebp+3Ch+var_4], ebx
0x78CCD5: cmp     byte ptr [ebx+45h], 0; Compute executes geometry initialization only while treeComputedFlag is zero; repeated Compute on the same CSpeedTreeRT is ignored. Therefore post-Compute leaf card counts/index arrays are immutable for that live object.
0x78CCD9: mov     [ebp+3Ch+var_40], 0
0x78CCE0: jnz     loc_78D07F
0x78CCE6: mov     eax, [ebx+5Ch]
0x78CCE9: mov     ecx, [ebp+3Ch+seed]
0x78CCEC: mov     ds:0B429C4h, eax
0x78CCF1: push    ecx; seed
0x78CCF2: mov     ecx, [ebx]; this
0x78CCF4: call    OB_CTreeEngine_SetSeed_010201A0; CTreeEngine::SetSeed per local SpeedTreeRT 4.1: 0=random seed, 1=keep existing seed, >1=store provided seed at +0x48.
0x78CCF9: fld     dword ptr [ebx+24h]
0x78CCFC: push    ecx
0x78CCFD: mov     ecx, [ebx]; this
0x78CCFF: fstp    [esp+0BCh+leafSizeIncreaseFactor]; leafSizeIncreaseFactor
0x78CD02: call    OB_CTreeEngine_Compute_010201A0;
0x78CD07: mov     edx, [ebx+0Ch]
0x78CD0A: mov     eax, [ebx+60h]
0x78CD0D: mov     ecx, [ebx+5Ch]; this
0x78CD10: push    edx; lightingEngine
0x78CD11: push    eax; frondGeometry
0x78CD12: call    OB_CFrondEngine_Compute_010201A0; SpeedTreeOBSE 2026-05-30: C:\src\Fronds reference layer instruments this CFrondEngine::Compute callsite under the frond restoration opt-in.
0x78CD17: mov     ecx, [ebx+60h]
0x78CD1A: movzx   eax, word ptr [ecx+20h]
0x78CD1E: mov     esi, [ebx]
0x78CD20: mov     [ebx+64h], ax
0x78CD24: mov     eax, [esi+98h]
0x78CD2A: test    eax, eax
0x78CD2C: jz      short loc_78CD47
0x78CD2E: mov     ecx, [esi+9Ch]
0x78CD34: sub     ecx, eax
0x78CD36: mov     eax, 30C30C31h
0x78CD3B: imul    ecx
0x78CD3D: sar     edx, 4
0x78CD40: mov     eax, edx
0x78CD42: shr     eax, 1Fh
0x78CD45: add     eax, edx
0x78CD47: push    eax; leafTextureCount
0x78CD48: lea     ecx, [esi+84h]; this
0x78CD4E: call    OB_SIdvLeafInfo_InitTables_010201A0; Allocates and initializes the SIdvLeafInfo runtime tables: random rocking-group time offsets, 16 floats per texture-orientation texcoord block, and zeroed per-LOD leaf-card vertex tables.
0x78CD53: mov     edx, [ebx+0Ch]
0x78CD56: mov     eax, [edx+38h]
0x78CD59: cmp     eax, 1
0x78CD5C: jnz     short loc_78CD65
0x78CD5E: mov     ecx, ebx; this
0x78CD60: call    CSpeedTreeRT__ComputeLeafStaticLighting; CSpeedTreeRT::ComputeLeafStaticLighting per local 4.1: compute tree center from bounds and pass leaves/LOD count to lighting engine.
0x78CD65: mov     eax, [ebx]
0x78CD67: mov     ecx, [ebx+10h]; this
0x78CD6A: add     eax, 0F4h ; 'ô'
0x78CD6F: push    eax; windInfo
0x78CD70: call    OB_CWindEngine_Init_010201A0; Oblivion-local CWindEngine::Init for the 0x1C-byte SIdvWindInfo record. Copies leafFactors.x/y, computes leafFrequency = leafFactors.y * strength * kFrequencyScale and leafThrow = leafFactors.x * strength * kThrowScale, then stores strength. This routine does not read the intervening leafOscillation vector; later source is used only to name the observed record fields.
0x78CD75: mov     eax, [ebx]
0x78CD77: mov     ecx, [eax+0D4h]
0x78CD7D: mov     edx, [eax+0C0h]
0x78CD83: add     eax, 84h ; '„'
0x78CD88: push    eax; leafInfo
0x78CD89: push    ecx; leafLods
0x78CD8A: mov     ecx, [ebx+8]; this
0x78CD8D: push    edx; leafLodCount
0x78CD8E: call    OB_CLeafGeometry_Init_010201A0; Only Oblivion call to CLeafGeometry::Init; it builds all SLodGeometry records and alternate-index arrays during the first successful Compute.
0x78CD93: cmp     dword ptr [ebx+4Ch], 0; Composite-leaf authority: when CSpeedTreeRT+0x4C embedded texcoords exists, Compute transfers authored 10000 leaf UV rectangles into CLeafGeometry before stock leaf export.
0x78CD97: jz      short loc_78CDEB
0x78CD99: xor     esi, esi
0x78CD9B: jmp     short loc_78CDA0
0x78CDA0: mov     eax, [ebx+4Ch]
0x78CDA3: cmp     esi, [eax]
0x78CDA5: jge     short loc_78CDBE; Embedded texcoord +0x00 is leaf-map count; loop bounds each 8-float authored composite UV rectangle.
0x78CDA7: mov     ecx, esi
0x78CDA9: shl     ecx, 5
0x78CDAC: add     ecx, [eax+4]
0x78CDAF: push    ecx; texcoordBlock
0x78CDB0: mov     ecx, [ebx+8]; this
0x78CDB3: push    esi; leafMapIndex
0x78CDB4: call    OB_CLeafGeometry_SetTextureCoords_010201A0; Compute transfers each embedded 8-float leaf rectangle through 0x798550. Therefore stock exported leaf-card UVs are already Direct3D-signed (T negated in Oblivion), and consumers must preserve their observed signed orientation.
0x78CDB9: add     esi, 1
0x78CDBC: jmp     short loc_78CDA0
0x78CDBE: xor     esi, esi
0x78CDC0: mov     eax, [ebx+4Ch]
0x78CDC3: cmp     esi, [eax+10h]
0x78CDC6: jge     short loc_78CDEB
0x78CDC8: movzx   edx, byte ptr ds:0B4297Dh
0x78CDCF: mov     ecx, esi
0x78CDD1: shl     ecx, 5
0x78CDD4: add     ecx, [eax+14h]
0x78CDD7: push    edx; flipT
0x78CDD8: mov     edx, [ebx+60h]
0x78CDDB: push    ecx; texcoordBlock
0x78CDDC: mov     ecx, [ebx+5Ch]
0x78CDDF: push    esi; frondMapIndex
0x78CDE0: push    edx; frondGeometry
0x78CDE1: call    OB_CFrondGeometry_CopyEmbeddedTexCoords_010201A0; CFrondEngine::SetTextureCoords per local 4.1: optionally flip T coordinates, reset vertex counter, ChangeTexCoord for every vertex.
0x78CDE6: add     esi, 1
0x78CDE9: jmp     short loc_78CDC0
0x78CDEB: cmp     [ebp+3Ch+compositeStrips], 0
0x78CDEF: jz      short loc_78CE05
0x78CDF1: mov     ecx, [ebx+4]; this
0x78CDF4: push    0; toggleFaceOrdering
0x78CDF6: call    OB_CIndexedGeometry_CombineStrips_010201A0; OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::CombineStrips stitches per-LOD unsigned-short index arrays, including parity-dependent degenerates when requested, then replaces lengths/pointers/totals through deep vector assignment. RT4.1 corroborates the algorithm only; its 32-bit contiguous storage differs.
0x78CDFB: mov     ecx, [ebx+60h]; this
0x78CDFE: push    0; toggleFaceOrdering
0x78CE00: call    OB_CIndexedGeometry_CombineStrips_010201A0; OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::CombineStrips stitches per-LOD unsigned-short index arrays, including parity-dependent degenerates when requested, then replaces lengths/pointers/totals through deep vector assignment. RT4.1 corroborates the algorithm only; its 32-bit contiguous storage differs.
0x78CE05: mov     esi, [ebp+3Ch+transform4x4]
0x78CE08: test    esi, esi
0x78CE0A: jz      short loc_78CE52
0x78CE0C: lea     ecx, [ebp+3Ch+transform]; this
0x78CE0F: call    OB_stTransform_ctor_010201A0; Initializes a 0x40-byte row-major SpeedTree transform to identity.
0x78CE14: mov     ecx, 10h
0x78CE19: lea     edi, [ebp+3Ch+transform]
0x78CE1C: lea     eax, [ebp+3Ch+transform]
0x78CE1F: rep movsd
0x78CE21: mov     ecx, [ebx+4]; this
0x78CE24: push    eax; transform
0x78CE25: call    OB_CIndexedGeometry_Transform_010201A0; Oblivion CIndexedGeometry::Transform. Applies the 4x4 stTransform to current and CPU-wind source coordinates, and rotates the normal/tangent/binormal streams with the transform's rotational portion.
0x78CE2A: lea     ecx, [ebp+3Ch+transform]
0x78CE2D: push    ecx; transform
0x78CE2E: mov     ecx, [ebx+8]; this
0x78CE31: call    OB_CLeafGeometry_Transform_010201A0; Oblivion CLeafGeometry::Transform. Applies the 4x4 stTransform to every LOD's leaf centers (including the preserved CPU-wind source centers) and transforms the per-card orientation vectors.
0x78CE36: mov     ecx, [ebx+60h]; this
0x78CE39: lea     edx, [ebp+3Ch+transform]
0x78CE3C: push    edx; transform
0x78CE3D: call    OB_CIndexedGeometry_Transform_010201A0; Oblivion CIndexedGeometry::Transform. Applies the 4x4 stTransform to current and CPU-wind source coordinates, and rotates the normal/tangent/binormal streams with the transform's rotational portion.
0x78CE42: mov     ecx, [ebx+58h]; this
0x78CE45: test    ecx, ecx
0x78CE47: jz      short loc_78CE52
0x78CE49: lea     eax, [ebp+3Ch+transform]
0x78CE4C: push    eax; transform4x4
0x78CE4D: call    CSpeedTreeRT__SCollisionObjects_TransformAll; Transforms compact SpeedTree collision records: transforms position by 4x4 matrix and scales radius/height/box dimensions by axis scale. No rotation storage is touched.
0x78CE52: lea     ecx, [ebp+3Ch+extents]; this
0x78CE55: call    OB_Extents_Init_010201A0; stRegion constructor/helper: initializes min to large positive and max to large negative sentinel values.
0x78CE5A: lea     ecx, [ebp+3Ch+extents]
0x78CE5D: push    ecx; extents
0x78CE5E: mov     ecx, [ebx+4]; this
0x78CE61: mov     byte ptr [ebp+3Ch+var_40], 1
0x78CE65: call    OB_CIndexedGeometry_ComputeExtents_010201A0; Oblivion CIndexedGeometry::ComputeExtents. Walks the locally stored xyz vertex stream and includes each point in the 0x30-byte stRegion bounds object.
0x78CE6A: mov     ecx, [ebx+8]; this
0x78CE6D: lea     edx, [ebp+3Ch+extents]
0x78CE70: push    edx; extents
0x78CE71: call    OB_CLeafGeometry_ComputeExtents_010201A0; Oblivion CLeafGeometry::ComputeExtents. Expands the 0x30-byte stRegion using leaf centers and maximum card reach, accounting for billboard orientation and every stored LOD.
0x78CE76: mov     ecx, [ebx+60h]; this
0x78CE79: lea     eax, [ebp+3Ch+extents]
0x78CE7C: push    eax; extents
0x78CE7D: call    OB_CIndexedGeometry_ComputeExtents_010201A0; Oblivion CIndexedGeometry::ComputeExtents. Walks the locally stored xyz vertex stream and includes each point in the 0x30-byte stRegion bounds object.
0x78CE82: mov     eax, [ebx+40h]
0x78CE85: mov     ecx, [ebp+3Ch+extents]
0x78CE88: mov     [eax], ecx
0x78CE8A: mov     edx, [ebp+3Ch+var_30]
0x78CE8D: mov     [eax+4], edx
0x78CE90: mov     ecx, [ebp+3Ch+var_2C]
0x78CE93: mov     [eax+8], ecx
0x78CE96: mov     eax, [ebx+40h]
0x78CE99: mov     edx, dword ptr [ebp+3Ch+result.storage]
0x78CE9C: mov     [eax+0Ch], edx
0x78CE9F: mov     ecx, dword ptr [ebp+3Ch+result.storage+4]
0x78CEA2: add     eax, 0Ch
0x78CEA5: mov     [eax+4], ecx
0x78CEA8: mov     edx, dword ptr [ebp+3Ch+result.storage+8]
0x78CEAB: mov     [eax+8], edx
0x78CEAE: mov     ecx, [ebx+40h]
0x78CEB1: fld     dword ptr [ecx]
0x78CEB3: fstp    dword ptr [ebp+3Ch+compositeStrips]
0x78CEB6: fld     dword ptr [ecx+4]
0x78CEB9: fstp    [ebp+3Ch+seed]
0x78CEBC: fld     dword ptr [ebp+3Ch+compositeStrips]
0x78CEBF: fldz
0x78CEC1: fsub    st(1), st
0x78CEC3: fld     [ebp+3Ch+seed]
0x78CEC6: fsub    st, st(1)
0x78CEC8: fld     st(1)
0x78CECA: fsub    st, st(2)
0x78CECC: fmul    st, st
0x78CECE: fld     st(1)
0x78CED0: fmulp   st(2), st
0x78CED2: fld     st(3)
0x78CED4: fmulp   st(4), st
0x78CED6: fxch    st(1)
0x78CED8: faddp   st(3), st
0x78CEDA: fadd    st(2), st
0x78CEDC: fxch    st(2)
0x78CEDE: fstp    dword ptr [ebp+3Ch+compositeStrips]
0x78CEE1: fld     dword ptr [ecx]
0x78CEE3: mov     eax, dword ptr [ebp+3Ch+compositeStrips]
0x78CEE6: fstp    [ebp+3Ch+seed]
0x78CEE9: sar     eax, 1
0x78CEEB: fld     dword ptr [ecx+10h]
0x78CEEE: add     eax, 1FC00000h
0x78CEF3: fstp    [ebp+3Ch+transform4x4]
0x78CEF6: mov     dword ptr [ebp+3Ch+compositeStrips], eax
0x78CEF9: fld     [ebp+3Ch+seed]
0x78CEFC: fsub    st, st(1)
0x78CEFE: fld     [ebp+3Ch+transform4x4]
0x78CF01: fsub    st, st(2)
0x78CF03: fmul    st, st
0x78CF05: fld     st(1)
0x78CF07: fmulp   st(2), st
0x78CF09: faddp   st(1), st
0x78CF0B: fadd    st, st(2)
0x78CF0D: fstp    [ebp+3Ch+seed]
0x78CF10: mov     edx, [ebp+3Ch+seed]
0x78CF13: fld     dword ptr [ebp+3Ch+compositeStrips]
0x78CF16: sar     edx, 1
0x78CF18: add     edx, 1FC00000h
0x78CF1E: mov     [ebp+3Ch+seed], edx
0x78CF21: fld     [ebp+3Ch+seed]
0x78CF24: fcompp
0x78CF26: fnstsw  ax
0x78CF28: test    ah, 5
0x78CF2B: jnp     short loc_78CF5C
0x78CF2D: fld     dword ptr [ecx]
0x78CF2F: fstp    [ebp+3Ch+seed]
0x78CF32: fld     dword ptr [ecx+10h]
0x78CF35: fstp    [ebp+3Ch+transform4x4]
0x78CF38: fld     [ebp+3Ch+seed]
0x78CF3B: fsub    st, st(1)
0x78CF3D: fld     [ebp+3Ch+transform4x4]
0x78CF40: fsub    st, st(2)
0x78CF42: fld     st(1)
0x78CF44: fmulp   st(2), st
0x78CF46: fmul    st, st
0x78CF48: faddp   st(1), st
0x78CF4A: fadd    st, st(2)
0x78CF4C: fstp    [ebp+3Ch+seed]
0x78CF4F: mov     eax, [ebp+3Ch+seed]
0x78CF52: sar     eax, 1
0x78CF54: add     eax, 1FC00000h
0x78CF59: mov     dword ptr [ebp+3Ch+compositeStrips], eax
0x78CF5C: fld     dword ptr [ecx+0Ch]
0x78CF5F: fstp    [ebp+3Ch+seed]
0x78CF62: fld     dword ptr [ecx+4]
0x78CF65: fstp    [ebp+3Ch+transform4x4]
0x78CF68: fld     [ebp+3Ch+seed]
0x78CF6B: fsub    st, st(1)
0x78CF6D: fld     [ebp+3Ch+transform4x4]
0x78CF70: fsub    st, st(2)
0x78CF72: fmul    st, st
0x78CF74: fld     st(1)
0x78CF76: fmulp   st(2), st
0x78CF78: faddp   st(1), st
0x78CF7A: fadd    st, st(2)
0x78CF7C: fstp    [ebp+3Ch+seed]
0x78CF7F: mov     edx, [ebp+3Ch+seed]
0x78CF82: fld     dword ptr [ebp+3Ch+compositeStrips]
0x78CF85: sar     edx, 1
0x78CF87: add     edx, 1FC00000h
0x78CF8D: mov     [ebp+3Ch+seed], edx
0x78CF90: fld     [ebp+3Ch+seed]
0x78CF93: fcompp
0x78CF95: fnstsw  ax
0x78CF97: test    ah, 5
0x78CF9A: jnp     short loc_78CFCC
0x78CF9C: fld     dword ptr [ecx+0Ch]
0x78CF9F: fstp    [ebp+3Ch+transform4x4]
0x78CFA2: fld     dword ptr [ecx+4]
0x78CFA5: fstp    [ebp+3Ch+seed]
0x78CFA8: fld     [ebp+3Ch+seed]
0x78CFAB: fsub    st, st(1)
0x78CFAD: fld     [ebp+3Ch+transform4x4]
0x78CFB0: fsub    st, st(2)
0x78CFB2: fmul    st, st
0x78CFB4: fld     st(1)
0x78CFB6: fmulp   st(2), st
0x78CFB8: faddp   st(1), st
0x78CFBA: fadd    st, st(2)
0x78CFBC: fstp    [ebp+3Ch+seed]
0x78CFBF: mov     eax, [ebp+3Ch+seed]
0x78CFC2: sar     eax, 1
0x78CFC4: add     eax, 1FC00000h
0x78CFC9: mov     dword ptr [ebp+3Ch+compositeStrips], eax
0x78CFCC: fld     dword ptr [ecx+0Ch]
0x78CFCF: fstp    [ebp+3Ch+transform4x4]
0x78CFD2: fld     dword ptr [ecx+10h]
0x78CFD5: fstp    [ebp+3Ch+seed]
0x78CFD8: fld     [ebp+3Ch+seed]
0x78CFDB: fsub    st, st(1)
0x78CFDD: fld     [ebp+3Ch+transform4x4]
0x78CFE0: fsub    st, st(2)
0x78CFE2: fmul    st, st
0x78CFE4: fld     st(1)
0x78CFE6: fmulp   st(2), st
0x78CFE8: faddp   st(1), st
0x78CFEA: fadd    st, st(2)
0x78CFEC: fstp    [ebp+3Ch+seed]
0x78CFEF: mov     edx, [ebp+3Ch+seed]
0x78CFF2: fld     dword ptr [ebp+3Ch+compositeStrips]
0x78CFF5: sar     edx, 1
0x78CFF7: add     edx, 1FC00000h
0x78CFFD: mov     [ebp+3Ch+seed], edx
0x78D000: fld     [ebp+3Ch+seed]
0x78D003: fcompp
0x78D005: fnstsw  ax
0x78D007: test    ah, 5
0x78D00A: jnp     short loc_78D03E
0x78D00C: fld     dword ptr [ecx+0Ch]
0x78D00F: fstp    [ebp+3Ch+transform4x4]
0x78D012: fld     dword ptr [ecx+10h]
0x78D015: fstp    [ebp+3Ch+seed]
0x78D018: fld     [ebp+3Ch+seed]
0x78D01B: fsub    st, st(1)
0x78D01D: fld     [ebp+3Ch+transform4x4]
0x78D020: fsubrp  st(2), st
0x78D022: fld     st(1)
0x78D024: fmulp   st(2), st
0x78D026: fmul    st, st
0x78D028: faddp   st(1), st
0x78D02A: faddp   st(1), st
0x78D02C: fstp    [ebp+3Ch+seed]
0x78D02F: mov     eax, [ebp+3Ch+seed]
0x78D032: sar     eax, 1
0x78D034: add     eax, 1FC00000h
0x78D039: mov     dword ptr [ebp+3Ch+compositeStrips], eax
0x78D03C: jmp     short loc_78D042
0x78D03E: fstp    st
0x78D040: fstp    st
0x78D042: fld     dword ptr [ebp+3Ch+compositeStrips]
0x78D045: fadd    st, st
0x78D047: fstp    dword ptr [ecx+18h]
0x78D04A: cmp     dword ptr [ebx+50h], 0
0x78D04E: jz      short loc_78D057
0x78D050: mov     ecx, ebx; this
0x78D052: call    CSpeedTreeRT__ComputeSelfShadowTexCoords
0x78D057: mov     ecx, ebx; this
0x78D059: call    CSpeedTreeRT__SetupHorizontalBillboard; SetupHorizontalBillboard: when horizontal billboards are enabled, builds four XYZ corners at CSpeedTreeRT+0x70..0x9C from tree bounds midpoint and extent values.
0x78D05E: mov     byte ptr [ebx+45h], 1
0x78D062: lea     ecx, [ebp+3Ch+result.storage]; this
0x78D065: mov     byte ptr [ebp+3Ch+var_40], 2
0x78D069: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x78D06E: lea     ecx, [ebp+3Ch+extents]; this
0x78D071: mov     byte ptr [ebp+3Ch+var_40], 0
0x78D075: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x78D07A: jmp     loc_78D11F
0x78D07F: push    3Fh ; '?'; count
0x78D081: push    offset aComputeCalledM; "Compute() called more than once for sin"...
0x78D086: mov     ecx, offset OB_g_strError_010201A0; this
0x78D08B: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78D090: jmp     loc_78D11F
0x78D095: mov     ecx, [ebp+3Ch+var_38]
0x78D098: mov     edx, [ecx]
0x78D09A: mov     eax, [edx+4]
0x78D09D: call    eax
0x78D09F: push    eax
0x78D0A0: push    offset aCspeedtreer_15; "CSpeedTreeRT::Compute"
0x78D0A5: push    offset aSFailedS; "%s - failed [%s]"
0x78D0AA: lea     esi, [ebp+3Ch+result]; result
0x78D0AD: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78D0B2: add     esp, 0Ch
0x78D0B5: cmp     dword ptr [eax+18h], 10h
0x78D0B9: mov     byte ptr [ebp+3Ch+var_40], 4
0x78D0BD: jb      short loc_78D0C4
0x78D0BF: mov     eax, [eax+4]
0x78D0C2: jmp     short loc_78D0C7
0x78D0C4: add     eax, 4
0x78D0C7: push    eax; error
0x78D0C8: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78D0CD: add     esp, 4
0x78D0D0: lea     ecx, [ebp+3Ch+result]; this
0x78D0D3: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78D0D8: mov     eax, offset loc_78D11C
0x78D0DD: retn
0x78D0DE: push    offset aCspeedtreer_15; "CSpeedTreeRT::Compute"
0x78D0E3: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78D0E8: lea     esi, [ebp+3Ch+var_A8]; result
0x78D0EB: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78D0F0: add     esp, 8
0x78D0F3: cmp     dword ptr [eax+18h], 10h
0x78D0F7: mov     byte ptr [ebp+3Ch+var_40], 5
0x78D0FB: jb      short loc_78D102
0x78D0FD: mov     eax, [eax+4]
0x78D100: jmp     short loc_78D105
0x78D102: add     eax, 4
0x78D105: push    eax; error
0x78D106: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78D10B: add     esp, 4
0x78D10E: lea     ecx, [ebp+3Ch+var_A8]; this
0x78D111: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78D116: mov     eax, offset loc_78D11C
0x78D11B: retn
0x78D11C: mov     ebx, [ebp+3Ch+var_4]
0x78D11F: mov     al, [ebx+45h];
0x78D122: mov     ecx, [ebp+3Ch+var_48]
0x78D125: mov     large fs:0, ecx
0x78D12C: pop     ecx
0x78D12D: pop     edi
0x78D12E: pop     esi
0x78D12F: pop     ebx
0x78D130: add     ebp, 3Ch ; '<'
0x78D133: mov     esp, ebp
0x78D135: pop     ebp
0x78D136: retn    0Ch
0x9CB890: lea     ecx, [ebp+3Ch+extents]; this
0x9CB893: jmp     OB_stRegion_Dtor_010201A0; Oblivion stRegion destructor: invokes the no-op stVec teardown on embedded vectors at +0x18 and +0x00. RT4.1 stRegion's max/min vector composition corroborates the two 24-byte subobjects.
0x9CB898: lea     ecx, [ebp+3Ch+extents]; this
0x9CB89B: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB8A0: lea     ecx, [ebp+3Ch+result]; this
0x9CB8A3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB8A8: lea     ecx, [ebp+3Ch+var_A8]; this
0x9CB8AB: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB8B0: mov     edx, [esp-4+seed]
0x9CB8B4: lea     eax, [edx+0Ch]
0x9CB8B7: mov     ecx, [edx-70h]
0x9CB8BA: xor     ecx, eax
0x9CB8BC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB8C1: mov     eax, offset stru_AF4564
0x9CB8C6: jmp     ___CxxFrameHandler3
