/*
 *    Copyright 2012-2015 Kai Pastor
 *
 *    This file is part of OpenOrienteering.
 *
 *    OpenOrienteering is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    OpenOrienteering is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with OpenOrienteering.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _OPENORIENTEERING_GEOREFERENCING_TEST_H
#define _OPENORIENTEERING_GEOREFERENCING_TEST_H

#include <QtTest/QtTest>

#include "../src/core/georeferencing.h"


/**
 * @test Tests the Georeferencing class.
 */
class GeoreferencingTest: public QObject
{
Q_OBJECT
	
private slots:
	/**
	 * Initializes shared data.
	 */
	void initTestCase();
	
	/**
	 * Tests the behaviour for unset projected CRS.
	 */
	void testEmptyProjectedCRS();
	
	/**
	 * Tests the effect of a grid scale factor.
	 */
	void testGridScaleFactor();
	
	/**
	 * Tests whether Georeferencing supports particular projected CRS.
	 */
	void testCRS();
	
	void testCRS_data();
	
	/**
	 * Tests CRS templates.
	 */
	void testCRSTemplates();
	
	/**
	 * Tests whether Georeferencing can convert geographic coordinates to
	 * projected coordinates and vice versa for a collection of known points.
	 */
	void testProjection();
	
	void testProjection_data();
	
private:
	Georeferencing georef;
};

#endif
