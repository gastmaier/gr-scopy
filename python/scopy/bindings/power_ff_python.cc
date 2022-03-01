/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(power_ff.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(53a9ee39d626137728bab0bf78d25443)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/scopy/power_ff.h>
// pydoc.h is automatically generated in the build directory
#include <power_ff_pydoc.h>

void bind_power_ff(py::module& m)
{

    using power_ff    = gr::scopy::power_ff;


    py::class_<power_ff, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<power_ff>>(m, "power_ff", D(power_ff))

        .def(py::init(&power_ff::make),
           D(power_ff,make)
        )
        



        ;




}








