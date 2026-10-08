struct OB_SFrondVertex_010201A0
{
float position[3]; ///< Guide vertex xyz position.
float rotationTransform3x3[9]; ///< Nine-float orientation transform.
float primaryCrossSectionOrWindWeight; ///< Primary cross-section/wind weight. Oblivion has no stock RT 4.1 secondary slot in this 0x38 record.
int primaryWindGroup; ///< Primary wind group. Oblivion has no stock RT 4.1 secondary group in this 0x38 record.
};
